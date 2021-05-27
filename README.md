# Marlin Firmware for Biqu B1 / SKR 1.4 / TMC2225

![GitHub](https://img.shields.io/github/license/marlinfirmware/marlin.svg)
![GitHub contributors](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
![GitHub Release Date](https://img.shields.io/github/release-date/marlinfirmware/marlin.svg)
[![Build Status](https://github.com/MarlinFirmware/Marlin/workflows/CI/badge.svg?branch=bugfix-2.0.x)](https://github.com/MarlinFirmware/Marlin/actions)

<img align="right" width=175 src="buildroot/share/pixmaps/logo/marlin-250.png" />

## Specs

This firmware is configured for a slightly modified Biqu B1:

### Mods
* [BLTouch Smart 3.1](https://www.antclabs.com/bltouch) with [this mount](https://www.thingiverse.com/thing:4564987) (Z endstop & adjustable bracket removed).
* Filament runout sensor moved to the SKR 1.4's `E0_DET`/`P1_26` pin for use in "Marlin Mode".
* Case fans tied together in parallel, moved to `HE1`/`P2_04`, and enabled via `CONTROLLER_FAN` so they only turn on when steppers are enabled.

### Other
* [Raspberry Pi 3 Model B+](https://www.raspberrypi.org/products/raspberry-pi-3-model-b-plus/) running [OctoPrint](https://octoprint.org/)
