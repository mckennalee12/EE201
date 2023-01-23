void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  Serial.println("LED IS ON");
  delay(2000);
  digitalWrite(13, LOW);
  Serial.println("LED IS OFF");
  delay(1000);
  digitalWrite(11, HIGH);
  Serial.println("LED IS ON");
  delay(2000);
  digitalWrite(11, LOW);
  Serial.println("LED IS OFF");
  delay(1000);
}
