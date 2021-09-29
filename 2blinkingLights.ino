void setup() {
    pinMode(3,OUTPUT);
    pinMode(10,OUTPUT);
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);
    delay(1000);
    digitalWrite(3,HIGH);
    delay(250);
    digitalWrite(3,LOW);
    delay(1000);
    digitalWrite(3,HIGH);
    delay(250);
    digitalWrite(3,LOW);
    delay(1000);
}

void loop() {
    digitalWrite(10,HIGH);
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    digitalWrite(3,LOW);
    delay(200);
}
