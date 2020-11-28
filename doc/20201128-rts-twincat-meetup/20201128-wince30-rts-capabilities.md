# TwinCAT CE offers fieldbus infrastructure for C++

In Windows CE, Microsoft has developed an operating system which is compatible to desktop Windows and can be finely scaled in terms of size and function. Originally planned for use mainly in mobile devices, Windows CE has been real-time-capable since version 3.0 and is used increasingly in the industrial environment. Due to the relationship of Windows CE with the “larger” Windows, it was possible to adapt “TwinCAT CE” to “TwinCAT XP” with compatible source code. Since TwinCAT has mapped all real-time functions on Windows CE, TwinCAT real-time applications such as software PLC and Motion Control can coexist with real-time applications of a different origin. In addition to PLC and motion functionality, TwinCAT CE offers the option of running a deterministic cycle that is synchronized down to the fieldbus from its own native C code. The TwinCAT system is sufficiently flexible to enable the physical inputs and outputs of different fieldbus systems to be mapped to logical I/O tasks initially. The pointers to the logical input and output process images are available in the C application, as is the TwinCAT real-time callback. From this deterministic and cyclic callback, reading of the physical inputs can initially be triggered with a certain method before the logical outputs are distributed to the physical outputs after the actual logical calculation.

C programmers value the fact that the TwinCAT CE solution uses an open automation platform that enables C code development for other operating systems to continue to run as cyclic logical code with minimum adaptation: Neither the connections to different fieldbus systems nor the connectivity with the HMI and ERP worlds have to be implemented separately, since they are already included in the infrastructure of the TwinCAT CE system.

[TwinCAT 3: C++ drives automation](http://www.pc-control.net/pdf/special_25_years_pcc/products/pcc_special_0811_twincat3_e.pdf)