void setup() {
  //  setup LEDS
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // loop code for LED 1-5
  //Code for LED 1
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  //Code for LED 2
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  //LED 3
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  //LED 4
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  //LED 5
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  
}
