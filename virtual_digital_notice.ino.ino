#include<SoftwareSerial.h>
SoftwareSerial extra (10,11);
void setup() {
  Serial.begin(9600);
  extra.begin(9600);
  extra.print("hi i am extra");
  Serial.print("hi i am serial");
  // put your setup code here, to run once:

}

void loop() {

  if(Serial.available());
  {
    char data =Serial.read();
    extra.write(data);
    delay(1000);
  }
  // put your main code here, to run repeatedly:

}
