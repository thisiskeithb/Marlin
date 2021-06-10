# Marlin Firmware for Creality Ender-3 / SKR 1.3 / TMC5160

![GitHub](https://img.shields.io/github/license/marlinfirmware/marlin.svg)
![GitHub contributors](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
![GitHub Release Date](https://img.shields.io/github/release-date/marlinfirmware/marlin.svg)
[![Build Status](https://github.com/MarlinFirmware/Marlin/workflows/CI/badge.svg?branch=bugfix-2.0.x)](https://github.com/MarlinFirmware/Marlin/actions)

<img align="right" width=175 src="buildroot/share/pixmaps/logo/marlin-250.png" />

## Specs

This firmware is configured for a heavily modified Ender-3 fitted with a BigTreeTech SKR 1.3 and TMC5160s:

### Motherboard
* [BigTreeTech SKR 1.3](https://www.biqu.equipment/collections/skr-series/products/pre-sale-bigtreetech-skr-v1-3-smoothieboard-32-bit-open-source-arm-cpu-motherboard-support-uart-model-2004lcd-3d-printer-parts)
* [Printed control box](https://www.thingiverse.com/thing:3398254)

### Drivers
* [Watterott TMC5160s](https://shop.watterott.com/SilentStepStick-TMC5160-Stepper-motor-driver) on X/Y/Z/E

### Steppers
* **X-axis:** Creality 42-40/JKong Motor JK42HS40-1004A-02F 1.8° motor
* **Y-axis:** Anycubic AC-3D651/Busheng 17HD40005-22B, 1.8° motor
* **Z-axis:** Creality 42-34/JKong Motor JK42HS34-0844 1.8°
* **Extruder:** [LDO 0.9° pancake motor](https://ldomotors.manufacturer.globalsources.com/si/6008840349362/pdtl/Stepping-motor/1156769667/Nmea17-0.9-degree-hybrid-stepper-motor.htm)
* **Microstepping:** 1/32

### Hotend
 * [Bondtech BMG extruder](https://www.bondtech.se/en/product/bmg-extruder/)
 * Direct drive [E3D V6 all-metal hotend](https://e3d-online.com/v6-all-metal-hotend) and [plated copper heater block](https://e3d-online.com/v6-plated-copper-heater-block) with [this mount](https://www.thingiverse.com/thing:3751368)
 * [Slice Engineering 50w heater cartridge](https://www.sliceengineering.com/shop/50w-heater-cartridge), [450°C/high temperature thermistor](https://www.sliceengineering.com/shop/high-temp-thermistor), and [0.4mm vanadium nozzle](https://www.sliceengineering.com/shop/vanadium-nozzle)
 * [Mechatronics B5015E24B-BSR 24v 5015 fan](https://www.digikey.com/product-detail/en/mechatronics-fan-group/B5015E24B-BSR/1570-1034-ND/5209731) (parts cooling)
 * [BLTouch Smart](https://www.antclabs.com/bltouch)

### Bed
* [Keenovo](https://keenovo.store/) AC-powered silicone heater pad controlled by an [OPTO 22 Z120D10 SSR](https://www.opto22.com/products/z120d10)
* [Applied Magnets 2"x1/2"x1/8" N42SH High Temp Neodymium magnets](http://appliedmagnets.com/bar-magnets-2-in-x-1-2-in-x-1-8-in-high-temp-n42sh-neodymium-magnets-p-608.html) attached with [Permatex OPTIMUM GREY gasket maker](https://www.permatex.com/products/gasketing/optimum-gasket-makers/permatex-optimum-grey-gasket-maker/)
* Solid aluminum mounts
* [300mm MGN12H linear rail on Y](https://www.amazon.com/Iverntech-Linear-Carriage-Printer-Machine/dp/B0762MPVN3/) using [this mod](https://www.thingiverse.com/thing:2989134)
* Build plates:
  * [Thekkiinngg textured PEI spring steel sheet](https://www.amazon.com/Thekkiinngg-Prusa-Double-Sided-Textured-Powder-Coated/dp/B07V1JYJS2/) (rotated 90 degrees)
  * Ultem PEI on spring steel sheet
  * [Mamorubot polypropylene build plate](https://tiny-machines-3d.myshopify.com/products/polypropylene-build-plates-for-3d-printers)
  * [Biqu SSS "Super Spring Steel" steel sheet](https://www.biqu.equipment/collections/heatbed/products/biqu-sss-super-spring-steel-sheet-heated-bed-build-plate-platform-235x245mm-printer-parts-for-filament-ender-3-3-printer)

### LCD Controller
* [BigTreeTech TFT35 E3 V3](https://www.biqu.equipment/collections/lcd/products/btt-tft35-e3-v3-0-display-touch-screen-two-working-modes)

### Other
* [Raspberry Pi 3 Model B+](https://www.raspberrypi.org/products/raspberry-pi-3-model-b-plus/) running [OctoPrint](https://octoprint.org/)
* [3 x Noctua NF-A4x10 40mm fans](https://noctua.at/en/nf-a4x10-flx) powered by [eBoot LM2596 DC buck converter](https://www.amazon.com/eBoot-LM2596-Converter-3-0-40V-1-5-35V/dp/B01GJ0SC2C) (Two for the control box & one for the hotend)
* [Mean Well LRS-350-24 Power Supply](https://www.meanwell.com/webapp/product/search.aspx?prod=LRS-350)
* [X-axis tensioner](https://www.thingiverse.com/thing:3270228)
