# Beckhoff History

[Beckhoff: the Industrial PC turns 25](http://www.pc-control.net/pdf/special_25_years_pcc/products/pcc_special_0811_pc_technology_e.pdf)
[Beckhoff Milestones](https://www.beckhoff.com/english/beckhoff/milestones.htm)

Beckhoff began in 1986 with the manufacturing and implementation of Industrial PCs (IPCs). Today that is taken for granted, but at the time it was a ground-breaking idea for industrial control technology. This marked a turning point in the Beckhoff story: away from the controllers that had been manufactured up to that point, based on the 8 Bit Motorola 6809 processor, towards x86-based IPC controllers. This development was also closely connected with the question of data acquisition and signal output between PC and machine. Therefore, the development of some salient I/O technologies and subassemblies will also be considered in the following chronological list.

- 1982. `P1000`: Single-board motion controller. `P1000` — одноплатный контроллер управления движением.
- 1986. The First Beckhoff Industrial PC - `C4000`: 1 Core CPU, 16-bit PC, 10 MHz, 640 kB RAM, 20 MB HDD. PC Control — первый основанный на ПК контроллер ЧПУ станка.
  - First Beckhoff PC-XT-based controllers for woodworking machines. These were, on the one hand, controllers for double miter saws (i.e. the saw blades were driven to the desired length on both sides of a profile strip and angle cuts were made) and, on the other, for edge processing machines. The PCs were initially used as operating, computing and memory units; the actual real-time control still took place by means of the Motorola hardware. It was quickly recognized, however, that the PC could take over the complete function of a controller. As a result, the separate 6809 hardware became redundant and the idea of the multi-functional, real-time-capable PC controller was born.
- 1987. `B5000` – PC plug-in card for the reading in and output of electrical signals for the machine controller. The card was configurable on memory or port addresses and offered the PC direct access to the process image of the signals as driver-decoupled parallel I/O.
- 1988. `S1000`: Software PLC/NC on PC (DOS). `S1000` — программный ПЛК/NC персональный компьютер (операционная система DOS).
- 1989. Lightbus — высокоскоростная шина на оптоволокне.
  - `C1210` – Lightbus interface card and first M1000 Lightbus modules. Interestingly enough, the C1210 card was equipped with a Motorola 6809 processor; however, this was responsible only for the operation of the optical fiber fieldbus. The PC processor assumed the master controller role.
- 1990. `C2000`: All-in-one PC motherboard. All-in-one — персональный ПК типа "всё-в-одном" на материнской плате.
  - `C2000` – All-in-one PC Motherboard with Intel® 386SX, Cirrus chipset and Lightbus interface onboard
  - `C1100` – Single-board PC core with interface to Siemens S5 (technology: 80386SX, 82370SX, 8255 port component, Xilinx XC3030 as Lightbus interface, DPR to the S5). This PC was known internally as the “Press PC,” since its field of use was in metal presses.
  - `C1200`, `C1220` – ISA master cards for Lightbus. The C1200 was a passive card (with no processor of its own), while the C1220 had its own CPU for the processing of the Lightbus telegrams.
- 1992. `C1600` – Lightbus interface card for Mitsubishi PLC.
- 1993. `C1110` – Single-board PC with interface to Siemens S5 (complete PC with 80486DX, video controller, hard disk + disk, Lightbus interface, DPR to the S5)
- 1994. `C1120` – Lightbus interface card for Siemens S5 with Infineon 80C166 processor and single overall width
- 1995. Bus Terminal — модульная архитектура шины на основе модулей расширения — терминалов.
- 1996. TwinCAT — программный комплекс под Windows с функцией ПЛК и управлением движением.
- 1998. IPC Control Panel — панельные компьютеры с графическим дисплеем для удаленной установки и установки по месту.
- 1999. Fieldbus Box — защищенные IP 67 модули ввода/вывода.
- 2002. CX1000 — модульные встраиваемые ПК для монтажа на дин-рейку.
  - Development of a motherboard for the CX1000 Embedded PC with Pentium MMX-compatible National Semiconductor (later AMD) SC2200 processor. The motherboard development for this device marked Beckhoff’s return to the development of its own motherboards and BIOS, following a break of several years, and the start of an Embedded PC series for DIN rail mounting and with the direct connection of I/O Bus Terminals.
- 2003. EtherCAT, the real-time Ethernet fieldbus, is born. EtherCAT — промышленная шина реального времени на базе Ethernet.
- 2004. Development of motherboards in the formats CX, 3½”, Slot, ATX and PC/104 with 855 chipset and Intel® Celeron® M /Pentium® M processors.
- 2005.
  - TwinSAFE — компактные решения для промышленной безопасности труда.
  - AX5000 — сервоусилители на базе EtherCAT.
- 2006. Development of motherboards in the formats 3½”, Slot, ATX and PC/104 with 945 chipset and Intel® Core™ Duo /Core™2 Duo processors.
- 2007. Industrial Motherboards — собственное производство в Германии.
- 2008. XFC — сверхскоростная технология обработки ввода/вывода (eXtreme Fast Control).
- 2009. HD Bus Terminals — компактные многоканальные терминалы ввода/вывода (16-каналов, ширина 12 мм).
  - Development of motherboards in the formats 3½”, ATX and PC/104 with GS45 chipset and Intel® Core™2 Duo processors. The Slot form factor was dropped. Intel® Atom™ with US15W chipset was used in the form factors CX, 3½” and PC/104.
- 2010. TwinCAT 3 — продвинутая технология автоматизации.
- 2011. AM8000 — синхронные сервомоторы с однокабельной технологией (One Cable Technology).
  - Further motherboard developments are pending here in the formats 3½”, ATX and PC/104, with newer CPUs and chipsets of the “Sandy Bridge” generation. Where the Atom™ CPUs are concerned, the “Pineview D” and “Cedarview” will find their way into Beckhoff products.
- 2012.
  - Multi-touch — второе поколение панелей управления и панельных ПК с поддержкой сенсорного мультитач дисплея.
  - XTS — продвинутая технология транспортировки (eXtended Transport System).
- 2014.
  - Multicore — многоядерные системы управления и промышленные серверы для ускорения промышленных вычислительных возможностей.
  - AX8000 — много-осевые сервоусилители.
  - EtherCAT Plug-in Modules — подключаемые модули или терминалы шины для монтажа на печатные платы.
- 2015.
  - EtherCAT P — однокабельная технология для автоматизации в целом.
  - TwinCAT HMI — независимые от платформы пользовательские интерфейсы на основе веб-браузера и HTML5.
- 2016. EtherCAT ELM — измерительные модули интегрируемые в систему высокоточных измерительных технологий.
