int sensorPin = A0; // pin del sensor de lluvia
float lluvia;

void setup() {
  Serial.begin(9600);
}

void loop() {
  lluvia = analogRead(sensorPin) * (5.0 / 1023.0); // valor en voltaje
  Serial.println(lluvia); // enviar dato al PC
  delay(60000); // cada minuto
}
