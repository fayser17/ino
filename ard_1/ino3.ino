#define OUT LOW
#define IN  HIGH
long value;
int push;
int push2;
int isPushed;

void setup(){ 
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(5,OUTPUT);

  pinMode(4,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

  pinMode(2, INPUT);
  pinMode(3, INPUT);

  }

void loop(){
  value = analogRead(A0);
  push = digitalRead(2);
  push2 = digitalRead(3);


  Serial.println(isPushed);
  Serial.println(digitalRead(2));

  if(digitalRead(2) && isPushed == 0)
  {
   digitalWrite(12, IN);
   delay(300);
   isPushed = 1; 
  }
   if(digitalRead(2) && isPushed == 1)
  {
   digitalWrite(12, OUT);
   delay(300);
   isPushed = 0;  
  }
  
  if(push2 == 1)
  {
   digitalWrite(13, IN);  
  }
  else
  {
   digitalWrite(13, OUT);
  }
  
  if(isPushed == 1)
  {
   digitalWrite(12, IN);  
  }
  else
  {
   digitalWrite(12, OUT);
  }
  
  if(value >= 0 && value <= 400)
  {
    digitalWrite(8, IN);
    digitalWrite(7, OUT);
    digitalWrite(5, OUT);
  }
  if(value >= 401 && value <= 800)
  {
    digitalWrite(8, OUT);
    digitalWrite(7, IN);
    digitalWrite(5, OUT);
  }
  if(value >= 801 && value <= 1023)
  {
    digitalWrite(8, OUT);
    digitalWrite(7, OUT);
    digitalWrite(5, IN);
  }  
  
}
