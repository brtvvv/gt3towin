#!/bin/bash
# Jednorazowa instalacja srodowiska na wlasnym komputerze (Ubuntu / WSL2).
# Uzycie: bash tools/setup_local.sh /mnt/c/sciezka/do/CORE.GT3
set -e
cd "$(dirname "$0")/.."
CORE="$1"
[ -f "$CORE" ] || { echo "Podaj sciezke do CORE.GT3"; exit 1; }
sudo dpkg --add-architecture i386
sudo apt-get update -q
sudo apt-get install -y -q python3 python3-pip git curl xz-utils libc6:i386 binutils-mips-linux-gnu cpp
pip3 install --break-system-packages -q splat64 spimdisasm rabbitizer pyelftools pycparser toml Levenshtein intervaltree pygfxd pyyaml tqdm colorama crunch64 n64img 2>/dev/null || \
  pip3 install -q splat64 spimdisasm rabbitizer pyelftools pycparser toml Levenshtein intervaltree pygfxd pyyaml tqdm colorama crunch64 n64img
python3 -c "import pylibyaml" 2>/dev/null || echo "# stub" > "$(python3 -c 'import site;print(site.getsitepackages()[0])')/pylibyaml.py"
pip3 install --break-system-packages -q git+https://github.com/matt-kempster/m2c.git 2>/dev/null || pip3 install -q git+https://github.com/matt-kempster/m2c.git
export GT3_COMPILERS="$HOME/compilers"
sh tools/setup_compilers.sh
[ -d "$HOME/decomp-permuter" ] || git clone -q --depth 1 https://github.com/simonlindholm/decomp-permuter "$HOME/decomp-permuter"
python3 tools/extract_core.py "$CORE" orig/core_100000.bin
python3 -m splat split config/gt3.yaml
python3 tools/split_funcs.py
python3 tools/gen_context.py
echo "Gotowe. Teraz: bash tools/run_local.sh"
