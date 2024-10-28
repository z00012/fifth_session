int ledpin = 9;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  analogWrite(ledpin, val / 4);
  Serial.print(val);

}
