#define LED 13

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);

  delay(50);
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);

}

void loop() {
   char c;
   if(Serial.available()){
    c = Serial.read();

    if(c == 'a'){
      digitalWrite(LED,HIGH);
    }
    if(c == 'o'){
      digitalWrite(LED,LOW);
    }
    delay(100);
   }

}
