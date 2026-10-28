#!/bin/bash
# Instalacja srodowiska w sesji Claude Code w chmurze (claude.ai/code).
# Plik gry CORE.GT3 jest w PRYWATNYM repo brtvvv/gt3-data (nigdy w tym publicznym).
# Uzycie: bash tools/setup_cloud.sh
set -e
cd "$(dirname "$0")/.."
SUDO=""; [ "$(id -u)" -ne 0 ] && SUDO="sudo"
DATA="$HOME/gt3-data"
if [ ! -f "$DATA/CORE.GT3" ]; then
  git clone -q --depth 1 https://github.com/brtvvv/gt3-data "$DATA" || {
    echo "BRAK DOSTEPU do brtvvv/gt3-data - dodaj repo do sesji (add_repo) i uruchom ponownie"; exit 1; }
fi
$SUDO dpkg --add-architecture i386
$SUDO apt-get update -q >/dev/null
$SUDO apt-get install -y -q libc6:i386 binutils-mips-linux-gnu cpp xz-utils curl >/dev/null
PIPS="splat64 spimdisasm rabbitizer pyelftools pycparser toml Levenshtein intervaltree pygfxd pyyaml tqdm colorama crunch64 n64img"
pip3 install --break-system-packages -q $PIPS 2>/dev/null || pip3 install -q $PIPS
python3 -c "import pylibyaml" 2>/dev/null || echo "# stub" > "$(python3 -c 'import site;print(site.getsitepackages()[0])')/pylibyaml.py"
pip3 install --break-system-packages -q git+https://github.com/matt-kempster/m2c.git 2>/dev/null || pip3 install -q git+https://github.com/matt-kempster/m2c.git
export GT3_COMPILERS="$HOME/compilers"
grep -q GT3_COMPILERS ~/.bashrc 2>/dev/null || echo 'export GT3_COMPILERS=$HOME/compilers' >> ~/.bashrc
[ -x "$GT3_COMPILERS/ee-gcc2.9-991111-01/bin/ee-gcc" ] || sh tools/setup_compilers.sh
[ -d "$HOME/decomp-permuter" ] || git clone -q --depth 1 https://github.com/simonlindholm/decomp-permuter "$HOME/decomp-permuter"
python3 tools/extract_core.py "$DATA/CORE.GT3" orig/core_100000.bin
python3 -m splat split config/gt3.yaml >/dev/null
python3 tools/split_funcs.py
python3 tools/gen_context.py
echo "sha1: $(sha1sum orig/core_100000.bin | cut -d' ' -f1) (ma byc 8c69f1d3fec6bc96e6057dc0f0494051cd177ac7)"
echo "Gotowe."
