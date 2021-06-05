void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int i=4;
  for(int j=5; j<=8;j++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(j,HIGH);
    delay(2000);
    
    digitalWrite(i,LOW);
    digitalWrite(j,LOW);
    i--;
    
    
  }
  
  // put your main code here, to run repeatedly:

}
