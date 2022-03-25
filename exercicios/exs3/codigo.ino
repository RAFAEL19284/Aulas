void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
    digitalWrite(3,LOW);
  delay(1000);
    digitalWrite(4,HIGH);
  delay(1000);
    digitalWrite(4, LOW);
  delay(1000);
    digitalWrite(5, HIGH);
  delay(1000);
    digitalWrite(5, LOW);
    delay(1000);
}
