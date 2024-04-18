void setup() {
  pinMode(D4, OUTPUT);

  Serial.begin(9600);
  
}

void loop() {
  digitalWrite(D4, LOW);

  int val = analogRead(A0);
  Serial.println(val);

  if (val <= 350) {
    delay(1000);
    digitalWrite(D4, HIGH);
    delay(5000);
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
