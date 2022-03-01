void setup() {
  // put your setup code here, to run once:
  pinMode(16,OUTPUT);
  Serial.begin(115200);

}

void loop() {
  digitalWrite(16,LOW);
  delay(5000);
  digitalWrite(16,HIGH);
  delay(5000);
  Serial.println("LED IS TURNED ON");
  // put your main code here, to run repeatedly:

}
