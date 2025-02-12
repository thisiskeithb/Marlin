<p align="center"><img src="buildroot/share/pixmaps/logo/marlin-outrun-nf-500.png" height="250" alt="MarlinFirmware's logo" /></p>

<h1 align="center">Creality Ender-3 / SKR 1.4 / TMC2209 Marlin Firmware</h1>

<p align="center">
    <a href="/LICENSE"><img alt="GPL-V3.0 License" src="https://img.shields.io/github/license/thisiskeithb/marlin.svg"></a>
    <a href="https://github.com/thisiskeithb/Marlin/graphs/contributors"><img alt="Contributors" src="https://img.shields.io/github/contributors/thisiskeithb/marlin.svg"></a>
    <a href="https://github.com/thisiskeithb/Marlin/commits/archived/E3-SKR14-TMC2209"><img alt="Last Commit Date" src="https://img.shields.io/github/last-commit/thisiskeithb/Marlin/archived/E3-SKR14-TMC2209"></a>
    <a href="https://github.com/thisiskeithb/Marlin/actions/workflows/test-e3-skr14-tmc2209-bltouch-build.yml"><img alt="CI Status" src="https://github.com/thisiskeithb/Marlin/actions/workflows/test-e3-skr14-tmc2209-bltouch-build.yml/badge.svg"></a>
    <a href="https://github.com/sponsors/thisiskeithb"><img alt="GitHub Sponsors" src="https://img.shields.io/github/sponsors/thisiskeithb?color=db61a2"></a>
    <br />
    <a href="https://twitter.com/thisiskeithb"><img alt="Follow thisiskeithb on Twitter" src="https://img.shields.io/twitter/url/https/twitter.com/thisiskeithb.svg?style=social&label=Follow%20%40thisiskeithb"></a>
    <a href="https://bsky.app/profile/thisiskeithb.bsky.social"><img alt="Follow thisiskeithb on Bluesky" src="https://img.shields.io/static/v1?label=&message=Follow @thisiskeithb&color=1185FE&logo=bluesky&logoColor=white"></a>
</p>

## Specs

This firmware is configured for a heavily modified Ender-3 fitted with a BigTreeTech SKR 1.4 and TMC2209s:

### Motherboard
* BigTreeTech SKR 1.4
* [Printed control box](https://www.printables.com/model/79275-creality-ender-3-control-box-for-biqubigtreetech-s) with [2 x Noctua NF-A4x10 40mm fans](https://noctua.at/en/nf-a4x10-flx) powered by an [LM2596 DC buck converter](https://www.amazon.com/dp/B08NV3JCBC/)

### Drivers
* [BigTreeTech TMC2209s](https://biqu.equipment/products/bigtreetech-tmc2209-stepper-motor-driver-for-3d-printer-board-vs-tmc2208) on X/Y/Z/E

### Steppers
* **X-axis:** Creality 42-40/JKong Motor JK42HS40-1004A-02F 1.8° motor
* **Y-axis:** Anycubic AC-3D651/Busheng 17HD40005-22B, 1.8° motor
* **Z-axis:** Creality 42-34/JKong Motor JK42HS34-0844 1.8°
* **Extruder:** LDO 0.9° pancake motor
* **Microstepping:** 1/32

### Hotend
 * [Bondtech BMG extruder](https://www.bondtech.se/product/bmg-extruder/)
 * Direct drive [E3D V6 all-metal hotend](https://e3d-online.com/products/v6-all-metal-hotend?variant=40923457486907) and [plated copper heater block](https://e3d-online.com/products/v6-plated-copper-heater-block?_pos=2&_sid=5718865ab&_ss=r) with [this mount](https://www.thingiverse.com/thing:3241793)
 * [Slice Engineering 50w heater cartridge](https://www.sliceengineering.com/shop/50w-heater-cartridge), 450°C/high temperature thermistor, and 0.4mm vanadium nozzle
 * [Mechatronics G4010L24B-RSR 24v 40mm fan](https://www.digikey.com/product-detail/en/G4010L24B-RSR/1570-G4010L24B-RSR-ND/11492597) (hotend cooling)
 * [Mechatronics B5015E24B-BSR 24v 5015 fan](https://www.digikey.com/product-detail/en/mechatronics-fan-group/B5015E24B-BSR/1570-1034-ND/5209731) (parts cooling)
 * [BLTouch Smart](https://www.antclabs.com/bltouch) (connected to probe port)

### Bed
* [Keenovo 120V / AC-powered silicone heater pad](https://keenovo.store/products/keenovo-silicone-heater-235mm-x-235mm-for-ender-3-3d-printer-build-plate-heatbed-heating-upgrade?variant=33420243206284) controlled by an [OPTO 22 Z120D10 SSR](https://www.opto22.com/products/z120d10)
* [Applied Magnets 2"x1/2"x1/8" N42SH high temp neodymium magnets](https://appliedmagnets.com/bar-magnets-2-in-x-1-2-in-x-1-8-in-high-temp-n42sh-neodymium-magnets/) attached with Permatex OPTIMUM GREY gasket maker
* Solid aluminum mounts
* [300mm MGN12H linear rail on Y](https://www.amazon.com/dp/B0762MPVN3/) using [this mod](https://www.printables.com/model/79281-creality-ender-3-y-axis-mgn12h-linear-rail-mod-new)
* Build plates:
  * Thekkiinngg textured PEI spring steel sheet (rotated 90 degrees)
  * Ultem PEI on spring steel sheet
  * Mamorubot polypropylene build plate
  * Biqu SSS "Super Spring Steel" steel sheet

### LCD Controller
* [BigTreeTech TFT35 E3 V3](https://biqu.equipment/products/btt-tft35-e3-v3-0-display-touch-screen-two-working-modes)

### Other
* [Raspberry Pi 3 Model B+](https://www.raspberrypi.com/products/raspberry-pi-3-model-b-plus/) running [OctoPrint](https://octoprint.org/)
* [Mean Well LRS-350-24 Power Supply](https://www.meanwell.com/webapp/product/search.aspx?prod=LRS-350)
* [X-axis tensioner](https://www.thingiverse.com/thing:3270228)
