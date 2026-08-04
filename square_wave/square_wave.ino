const int LEDPin = 2;  
const int outPin = 13;
float dutyCycle = 10.0;   // Dutycycle in %     

const unsigned long period = 1000;  // Total period in ms

void setup() {
  pinMode(outPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Square Wave Generator Started");
  Serial.print("Duty Cycle: ");
  Serial.print(dutyCycle);
  Serial.println("%");
}

void loop() {
  unsigned long highTime = (period * dutyCycle) / 100;
  unsigned long lowTime = period - highTime;
  
  digitalWrite(outPin, HIGH);
  delay(highTime);
  
  digitalWrite(outPin, LOW);
  delay(lowTime);
}
