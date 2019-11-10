int butt = 8;
int led = 12;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(butt, INPUT_PULLUP);
  Serial.begin(19200);
}

void loop() {
  if (digitalRead(butt) == LOW) {
    Serial.println("   YES!! FEED ME MORE ! ");
    digitalWrite(led, LOW);
  }
  else {
    Serial.println("   MORE !");
    digitalWrite(led, HIGH);
  }
  
}
