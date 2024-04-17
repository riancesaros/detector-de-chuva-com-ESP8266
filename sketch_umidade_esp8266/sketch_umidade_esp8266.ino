/*
void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);

}


void loop() {
  // put your main code here, to run repeatedly:,

  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);

  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  delay(500);

  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);

  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
}
*/

void setup() {
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);

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

  delay(1000);
}
