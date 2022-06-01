#define OUT LOW
#define IN  HIGH
long value;

void setup(){ 
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(5,OUTPUT);

  }

void loop(){
  value = analogRead(A0);

  Serial.println(value);
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
