#!/bin/bash
(cd keyboard/ergodox/; make -f Makefile.lufa clean; make -f Makefile.lufa jameswhite; ./keymap_renderer.pl keymap_jameswhite.h > jameswhite.map; mv ergodox_lufa.hex ~/Downloads/_jameswhite_lufa.hex)
