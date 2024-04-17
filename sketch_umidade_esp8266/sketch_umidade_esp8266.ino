void setup() {
  pinMode(D10, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int val = analogRead(D0);
  Serial.println(val);
  digitalWrite(D10, HIGH);
  /*
  if (val > 2000) {
    digitalWrite(D1, HIGH);
  }
  
  /*
  if (val < 500) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }

  if (val < 200) {
    digitalWrite(2, HIGH);
    digitalWrite(0, HIGH);
  } else {
    digitalWrite(0, LOW);
  }

  if (val < 150) {
    digitalWrite(2, HIGH);
    digitalWrite(0, HIGH);
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  if (val < 100) {
    digitalWrite(2, HIGH);
    digitalWrite(0, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  */
  delay(1000);
}
