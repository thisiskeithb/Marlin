# Marlin Firmware for Anet AM8 / SKR 1.3 / TMC2209

![GitHub](https://img.shields.io/github/license/marlinfirmware/marlin.svg)
![GitHub contributors](https://img.shields.io/github/contributors/marlinfirmware/marlin.svg)
![GitHub Release Date](https://img.shields.io/github/release-date/marlinfirmware/marlin.svg)
[![Build Status](https://github.com/MarlinFirmware/Marlin/workflows/CI/badge.svg?branch=bugfix-2.0.x)](https://github.com/MarlinFirmware/Marlin/actions)

<img align="right" width=175 src="buildroot/share/pixmaps/logo/marlin-250.png" />

## Specs

This firmware is configured for a heavily modified Anet AM8 fitted with a BigTreeTech SKR 1.3 and TMC2209s:

### Frame & Plastic Bits
* AM8 frame (T-slot)
* Customized [Bear Upgrade parts](https://www.thingiverse.com/thing:2865573) for T-slot
* [Prusa Bear X axis](https://github.com/gregsaun/bear_extruder_and_x_axis)
* [AM8 Z brace](https://www.thingiverse.com/thing:3115521)
* [LM8UU holders](https://www.thingiverse.com/thing:1172217) (Y-axis)
* [22mm rubber feet](https://www.amazon.com/dp/B079Z7Z73Z/)

### Motherboard
* [BigTreeTech SKR 1.3](https://www.biqu.equipment/collections/skr-series/products/pre-sale-bigtreetech-skr-v1-3-smoothieboard-32-bit-open-source-arm-cpu-motherboard-support-uart-model-2004lcd-3d-printer-parts)
* [Printed control box](https://www.thingiverse.com/thing:4178177)

### Drivers
* [BigTreeTech TMC2209s](https://www.biqu.equipment/products/bigtreetech-tmc2209-stepper-motor-driver-for-3d-printer-board-vs-tmc2208) on X/Y/Z/E

### Steppers
* **X-axis:** Tevo 78 oz-in 40mm 17HD4401-C5.18 1.8°
* **Y-axis:** Tevo 78 oz-in 40mm 17HD4401-C5.18 1.8°
* **Z-axis:** 2 x Creality 42-34/JKong Motor JK42HS34-0844 1.8° with TR8x2 leadscrews
* **Extruder:** [LDO 0.9° pancake motor](https://ldomotors.manufacturer.globalsources.com/si/6008840349362/pdtl/Stepping-motor/1156769667/Nmea17-0.9-degree-hybrid-stepper-motor.htm)
* **Microstepping:** 1/32 on E

### Hotend
 * [E3D V6 Volcano all-metal hotend](https://e3d-online.com/v6-all-metal-hotend)
 * [0.8mm Balitensen stainless steel nozzle](https://www.amazon.com/dp/B078PT5H2Z/)
 * Customized [BMG extruder](https://www.thingiverse.com/thing:3469271) with cloned BMG gears
 * [Prusa IR filament sensor](https://www.amazon.com/dp/B07PYQWGK1/)
 * [Antrader 4010 24V fan](https://www.amazon.com/dp/B07K1WHJ2X/)
 * [SoundOriginal 24V 5015 fan](https://www.amazon.com/dp/B0755BY9RH/)
 * [Genuine PINDA V2](https://www.printedsolid.com/products/pinda-2-probe-replacement)

### Bed
* 200mm Tevo Tarantula bed
* [Keenovo](https://keenovo.store/) AC-powered silicone heater pad controlled by an [OPTO 22 Z120D10 SSR](https://www.opto22.com/products/z120d10)
* Creality die springs
* [Two Trees spring steel sheet](https://www.amazon.com/dp/B07W4JMW2S/)

### LCD Controller
* [BigTreeTech 2004 Graphic Smart Display Controller](https://www.amazon.com/dp/B01FLU9X5Q)

### Other
* [Raspberry Pi 3 Model B+](https://www.raspberrypi.org/products/raspberry-pi-3-model-b-plus/) running [OctoPrint](https://octoprint.org/)
* [Mean Well LRS-150-24 Power Supply](https://www.amazon.com/dp/B018RE4CWW/)
 