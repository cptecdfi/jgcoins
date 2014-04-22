#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/jgcoin.png
ICON_DST=../../src/qt/res/icons/jgcoin.ico
convert ${ICON_SRC} -resize 16x16 jgcoin-16.png
convert ${ICON_SRC} -resize 32x32 jgcoin-32.png
convert ${ICON_SRC} -resize 48x48 jgcoin-48.png
convert jgcoin-16.png jgcoin-32.png jgcoin-48.png ${ICON_DST}

