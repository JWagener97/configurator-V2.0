# Configurator-V2.0
CBI-Energy Configurator Firmware

This firmware is an anabtation of the previous firmware and has been updated to make use of the Espressive-IDF version 5.0

## Road map of development sections that need to be created.

### Firmware Design 

#### Compulsary Features

- [x] Improved Compiler Compatability 
- [x] Battry Charge and Voltage I2C Interface
- [ ] WiFI
- [ ] Webpage
- [ ] ESP NOW
- [ ] Live Configuration Count
- [ ] OLED Display Intergration


#### Optional cool tasks

- [ ] ESP Now Encryption
- [ ] Espressive 
- [ ] Battry Percentage to time conversion
- [ ] Sleep Functions
- [ ] Create a branch for ESP32-S2mini

### PCB Design
- [x] Layout
- [x] Design Review
- [ ] PCB Ordered



Below is short explanation of remaining files in the project folder.

```
├── CMakeLists.txt
├── main
│   ├── CMakeLists.txt
│   └── main.c
└── README.md                  This is the file you are currently reading
```
Additionally, the project contains Makefile and component.mk files, used for the legacy Make based build system. 
They are not used or needed when building with CMake and idf.py.

