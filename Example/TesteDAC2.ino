#include <DAC8552a.h>

//This program exemplifies the use 
//of the library on a Texas Instruments 
//DAC8552 2-channel chip. Channel A 
//will make a saw tooth wave, and 
//channel B will make a sine wave, sumultaneously.

DAC8552a dac;

const float radian = 0.000488281F;
uint32_t sen;
float numpi = 0.0;

void setup() {
  dac.setPins(11, 13, 10);
  dac.initializeDAC8552a();
}

void loop() {
  for (int i=1; i<4096; i=i+4){
    int dacA = i*16; // Channel A shows the sawtooth wave
    dac.setChanValue(0, dacA); //  channel A
    int ChA = analogRead(0);
    delay(10);
    Serial.print("Channel A = ");
    Serial.print(ChA);
    numpi = PI*radian*i; //Channel B shows the sinewave
    int dacB = (1+(sin(numpi)))*32768;
    dac.setChanValue(1, dacB); // channel B
    delay(10);
    int ChB = analogRead(1);
    Serial.print("\t Channel B = ");
    Serial.println(ChB);
    delay(100);
  }  
}




