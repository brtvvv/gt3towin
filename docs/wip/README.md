# Prace w toku (niedopasowane, ale blisko)

## func_001BC848 (gt2k_menu::Transitive, wirtualna metoda nr 1), 2 roznice na 33 instrukcje

Petla po liscie intrusywnej (wezel `Node` osadzony w elemencie na offsecie 0x28,
`static_cast` z kontrola nulla daje `addiu -0x28` + `movz`). Iterator lezy na stosie
(`{cur, list}`) i jest zapisywany przez wskaznik (s1 = sp).

Jedyna roznica: przed pierwsza iteracja oryginal laduje `cur` ponownie z pamieci
(`lw a0, 0(sp)`), a nasza wersja przekazuje wartosc w rejestrze. Ten wzorzec iteratora
pewnie powtarza sie w wielu funkcjach menu, wiec warto go rozgryzc do konca.
