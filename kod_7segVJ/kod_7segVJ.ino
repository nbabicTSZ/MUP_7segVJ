int tipkalo1 = 9;
int tipkalo2 = 10;
int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;
void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(tipkalo1, INPUT_PULLUP);
  pinMode(tipkalo2, INPUT_PULLUP);

}

void loop() {
  if ( (digitalRead(tipkalo1) == LOW) && (digitalRead(tipkalo2) == HIGH) ) {
    digitalWrite(segF, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segG, HIGH);
  }
  if ( (digitalRead(tipkalo1) == HIGH) && (digitalRead(tipkalo2) == LOW) ) {
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segC, HIGH);
  }
  if  ( (digitalRead(tipkalo1) == LOW) && (digitalRead(tipkalo2) == LOW) ) {
    digitalWrite(segD, LOW);
    digitalWrite(segA, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segF, HIGH);
    delay(1000);

  }
  

}
