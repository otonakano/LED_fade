#define LED_PIN 9

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int i;
  for (i = 21; i < 256; i++) {
    analogWrite(LED_PIN, i);
    delay(30);
  }
  for (i = 255; i > 20; i--){
    analogWrite(LED_PIN, i);
    delay(30);
  }
}

