#define key digitalRead(A0)

void setup() {
  pinMode(A0, INPUT);
  for (int i = 1; i <= 6; i++)
  {
    pinMode(i, OUTPUT);
  }
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  if (key == 0) {
    int  randNum = random(1, 7);
    for (int i = 1; i <= 6; i++){
      digitalWrite(i, LOW);
    }
    Serial.println(randNum);
    digitalWrite(randNum, HIGH);
    delay(1000);
  }
}
