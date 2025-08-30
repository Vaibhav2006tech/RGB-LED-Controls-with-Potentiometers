int potR = A0, potG = A1, potB = A2;
int ledR = 9, ledG = 10, ledB = 11;

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  int valR = analogRead(potR);
  int valG = analogRead(potG);
  int valB = analogRead(potB);

  int pwmR = map(valR, 0, 1023, 0, 255);
  int pwmG = map(valG, 0, 1023, 0, 255);
  int pwmB = map(valB, 0, 1023, 0, 255);

  analogWrite(ledR, pwmR);
  analogWrite(ledG, pwmG);
  analogWrite(ledB, pwmB);
}
