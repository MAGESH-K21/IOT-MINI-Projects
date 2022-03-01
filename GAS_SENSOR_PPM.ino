#include "MQ135.h"
const int ANALOGPIN=0;
MQ135 gasSensor = MQ135(ANALOGPIN);
void setup(){
Serial.begin(115200); 
}
void loop(){
float ppm = gasSensor.getPPM();
Serial.println(ppm);
delay(1000);
}
