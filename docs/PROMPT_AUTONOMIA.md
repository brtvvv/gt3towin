# Prompt dla Claude Code: samodzielna naprawa wydajności GT3 (PS2Recomp)

Uruchomienie (PowerShell, w `C:\gt3towin`):

```
claude --permission-mode acceptEdits --add-dir C:\PS2Recomp --add-dir C:\gt3-data
```

Potem wklej poniższy prompt i uzupełnij ścieżkę folderu gry.

---

```
Pracujesz samodzielnie, bez pytania mnie o nic, dopóki nie skończysz albo nie utkniesz na czymś, czego nie da się obejść. Odpowiadaj po polsku i zwięźle. Przeczytaj CLAUDE.md (sekcje „Rekompilacja statyczna” i „Diagnoza <1 FPS”).

Kontekst: GT3 (PS2) działa przez PS2Recomp w C:\PS2Recomp (wygenerowany kod gry jest w ps2xRuntime\src\runner, build Release w out\build\fast). Folder gry z CORE.elf, GT3.VOL i plikami IRX: <WKLEJ ŚCIEŻKĘ>.
Objaw: zegar gry idzie 60 Hz, ale klatka obrazu i odczyt pada wykonują się raz na ~2 s. Pętla ekranu tytułowego (0x127CC8: func_001B8B10 + czekanie 1 vblank w 0x1CCC38) kręci się, dopóki flaga obiektu (+0x2E4) nie zostanie ustawiona. Przesył DMA VIF1 kończy się ~0,5 raza/s.
Podejrzenie: obsługa przerwania DMA w grze (0x25B738) wznawia łańcuch GIF wpisem CHCR.STR (0x1000A000, QWC=0) po znaczniku z bitem IRQ i odblokowuje VIF1 wpisem 8 do VIF1_FBRST (0x10003C10). Runtime prawdopodobnie nie kontynuuje łańcucha GIF od TADR po takim wznowieniu z przerwania, nie zgłasza ponownie końca DMA albo nie obsługuje zatrzymania (stall) VIF1/PATH3 i FBRST.STC. Flagi „gotowe” gra ustawia w strukturze 0x4A8380 (+0x1C + kanał*0xC).

Pętla pracy:
1. Jednorazowo: cd C:\PS2Recomp i git apply C:\gt3-data\recomp\gt3_diag.patch (liczniki [gt3stat]). Jeśli już naniesiony, pomiń.
2. Pomiar bazowy: powershell -ExecutionPolicy Bypass -File C:\gt3towin\tools\win\measure.ps1 -Game "<ŚCIEŻKA>" -Seconds 60
3. Hipoteza → mała zmiana w ps2xRuntime (głównie src\lib\ps2_memory.cpp, ps2_runtime.cpp, Kernel\EeScheduler.cpp) → measure.ps1 → porównaj „DMA VIF1 konce/s”. Cel: kilkadziesiąt na sekundę (tyle co klatek). Dodawaj tymczasowe logi do stderr, jeśli potrzebujesz danych, i usuwaj je potem.
4. Po każdej zmianie, która pomogła: zapisz stan poprawek do prywatnego repo:
   cd C:\PS2Recomp; git diff --ignore-cr-at-eol -- . ":!ps2xRuntime/src/runner" > C:\gt3-data\recomp\gt3.patch
   cd C:\gt3-data; git add recomp\gt3.patch; git commit -m "recomp: <co poprawione>"; git push
   Dopisz krótko wnioski do sekcji „Diagnoza <1 FPS” w C:\gt3towin\CLAUDE.md, commit i push w C:\gt3towin.
5. Gdy VIF1 kończy się regularnie: sprawdź, czy ekran tytułowy reaguje (w logach szukaj zmian odczytów pada) i zajmij się kolorami (czerwony odcień, szary pas).

Zasady: nigdy nie commituj do C:\PS2Recomp (cudze repo) ani kodu z ps2xRuntime\src\runner (to kod z gry) do żadnego publicznego repo. gt3towin jest publiczne, gt3-data prywatne. Nie uruchamiaj gry dłużej niż 90 s na pomiar. Po 3 nieudanych hipotezach z rzędu zrób podsumowanie tego, co wykluczyłeś, w CLAUDE.md i spróbuj innego kierunku.
```
