# DAC8552a
Simple library for Texas Instruments Digital to Analog Converter DAC8552 for Arduino. Sets channel and voltage only.

The letter "a" refers to a simpler library as possible and to differentiate it from another more complete library of Rob Tillaard, which you can find here: https://github.com/RobTillaart/Arduino/tree/master/libraries/DAC8552.

The library was assembled based on the data sheets of Texas Instruments DAC8552 chip. For any explanation see Texas Instrument DAC information at

http://www.ti.com/lit/ds/symlink/dac8552.pdf

The arduino communication with the chip happens via SPI, selecting the appropriate pins for each type of board through the command setPins(DIN, SCLK, SYNC). In Arduino Uno, the pins correspond to:

DIN = MOSI ==> pin 11

SCLK = SCK ==> pin 13

SYNC = SS ==> pin 10

The command is, therefore, setPins(11, 13, 10).

To initiate the transmission, SPI communication must be enabled via the initializeDAC855X() command.

Next, you define the channel (0 to channel A and 1 to channel B) where the DAC will be obtained and the DAC value (between 0 and 65535), with the setChanValue(Channel, Value of DAC) command.

In the example, there are a program to generate a sawtooth wave on channel A and a sine wave on channel B, at the same time.

The library does not have power down functionality present on this device.
