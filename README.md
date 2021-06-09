# Marlin Firmware for Creality Ender-3 / SKR 1.4 / TMC2209

![GitHub](https://img.shields.io/github/license/marlinfirmware/marlin.svg)
![GitHub contributors](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
![GitHub Release Date](https://img.shields.io/github/release-date/marlinfirmware/marlin.svg)
[![Build Status](https://github.com/MarlinFirmware/Marlin/workflows/CI/badge.svg?branch=bugfix-2.0.x)](https://github.com/MarlinFirmware/Marlin/actions)

<img align="right" width=175 src="buildroot/share/pixmaps/logo/marlin-250.png" />

## Specs

This firmware is configured for a heavily modified Ender-3 fitted with a BigTreeTech SKR 1.4 and TMC2209s:

### Motherboard
* [BigTreeTech SKR 1.4](https://www.biqu.equipment/collections/skr-series/products/btt-skr-v1-4-skr-v1-4-pro)
* [Printed control box](https://www.thingiverse.com/thing:3398254)

### Drivers
* [BigTreeTech TMC2209s](https://www.biqu.equipment/products/bigtreetech-tmc2209-stepper-motor-driver-for-3d-printer-board-vs-tmc2208) on X/Y/Z/E

### Steppers
* **X-axis:** Creality 42-40/JKong Motor JK42HS40-1004A-02F 1.8° motor
* **Y-axis:** Anycubic AC-3D651/Busheng 17HD40005-22B, 1.8° motor
* **Z-axis:** Creality 42-34/JKong Motor JK42HS34-0844 1.8°
* **Extruder:** [LDO 0.9° pancake motor](https://www.printedsolid.com/products/ldo-nema-17-motor-pancake-ldo-42sth25-1404)
* **Microstepping:** 1/32

### Hotend
 * [Bondtech BMG extruder](https://www.bondtech.se/en/product/bmg-extruder/)
 * Direct drive [E3D V6 all-metal hotend](https://e3d-online.com/v6-all-metal-hotend) and [plated copper heater block](https://e3d-online.com/v6-plated-copper-heater-block) with [this mount](https://www.thingiverse.com/thing:3241793)
 * [Slice Engineering 50w heater cartridge](https://www.sliceengineering.com/shop/50w-heater-cartridge), [450°C/high temperature thermistor](https://www.sliceengineering.com/shop/high-temp-thermistor), and [0.4mm vanadium nozzle](https://www.sliceengineering.com/shop/vanadium-nozzle)
 * [Mechatronics G4010L24B-RSR 24v 40mm fan](https://www.digikey.com/product-detail/en/G4010L24B-RSR/1570-G4010L24B-RSR-ND/11492597) (hotend cooling)
 * [Mechatronics B5015E24B-BSR 24v 5015 fan](https://www.digikey.com/product-detail/en/mechatronics-fan-group/B5015E24B-BSR/1570-1034-ND/5209731) (parts cooling)
 * [BLTouch Smart](https://www.antclabs.com/bltouch) (connected to probe port)

### Bed
* [Keenovo](https://keenovo.store/) AC-powered silicone heater pad controlled by an [OPTO 22 Z120D10 SSR](https://www.opto22.com/products/z120d10)
* [Applied Magnets 2"x1/2"x1/8" N42SH High Temp Neodymium magnets](http://appliedmagnets.com/bar-magnets-2-in-x-1-2-in-x-1-8-in-high-temp-n42sh-neodymium-magnets-p-608.html) attached with [Permatex OPTIMUM GREY gasket maker](https://www.permatex.com/products/gasketing/optimum-gasket-makers/permatex-optimum-grey-gasket-maker/)
* Solid aluminum mounts
* [300mm MGN12H linear rail on Y](https://www.amazon.com/dp/B0762MPVN3/) using [this mod](https://www.thingiverse.com/thing:2989134)
* Build plates:
  * [Thekkiinngg textured PEI spring steel sheet](https://www.amazon.com/dp/B07V1JYJS2/) (rotated 90 degrees)
  * Ultem PEI on spring steel sheet
  * [Mamorubot polypropylene build plate](https://tiny-machines-3d.myshopify.com/products/polypropylene-build-plates-for-3d-printers)
  * [Biqu SSS "Super Spring Steel" steel sheet](https://www.biqu.equipment/collections/heatbed/products/biqu-sss-super-spring-steel-sheet-heated-bed-build-plate-platform-235x245mm-printer-parts-for-filament-ender-3-3-printer)

### LCD Controller
* [BigTreeTech TFT35 E3 V3](https://www.biqu.equipment/collections/lcd/products/btt-tft35-e3-v3-0-display-touch-screen-two-working-modes)

### Other
* [Raspberry Pi 3 Model B+](https://www.raspberrypi.org/products/raspberry-pi-3-model-b-plus/) running [OctoPrint](https://octoprint.org/)
* [2 x Noctua NF-A4x10 40mm fans](https://noctua.at/en/nf-a4x10-flx) powered by [LM2596 DC buck converter](https://www.amazon.com/dp/B06XZ1DKF2/) (control box)
* [Mean Well LRS-350-24 Power Supply](https://www.meanwell.com/webapp/product/search.aspx?prod=LRS-350)
* [X-axis tensioner](https://www.thingiverse.com/thing:3270228)
