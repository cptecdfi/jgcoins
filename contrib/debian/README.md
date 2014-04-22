
Debian
====================
This directory contains files used to package jgcoind/jgcoin-qt
for Debian-based Linux systems. If you compile jgcoind/jgcoin-qt yourself, there are some useful files here.

## jgcoin: URI support ##


jgcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install jgcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your jgcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/jgcoin128.png` to `/usr/share/pixmaps`

jgcoin-qt.protocol (KDE)

