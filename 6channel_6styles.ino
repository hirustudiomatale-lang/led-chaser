void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int time = 100;
  
  for(int i = 1; i< 7; i++){ //nigh rider
    digitalWrite(i,HIGH);
    delay(time);
    digitalWrite(i,LOW);
  }
  for(int q = 5; q>1; q--){ //000-
    digitalWrite(q,HIGH);
    delay(time);
    digitalWrite(q,LOW);
  }  

 
}
 