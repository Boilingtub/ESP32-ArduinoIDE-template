#include<math.h>
#define DAC1 25
#define LED 2 
#define BAUDRATE 115200
#define DACMAX 255
#define maxvolt 3.3

const int led_high_time = 250;
const int led_low_time = 250;

void setup() {
  Serial.begin(BAUDRATE);
  pinMode(DAC2, OUTPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
}
