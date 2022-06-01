#define OUT OUTPUT
#define IN  INPUT
void setup(){ 
  pinMode(9,OUT);
  pinMode(8,OUT);
  pinMode(7,OUT);
  pinMode(6,OUT);

  }

void loop(){

  int n = 9;

  while (n >= 6){
    digitalWrite(n, HIGH);
    delay(100);
    digitalWrite(n, LOW);
    delay(100);
    n = n - 1;
  };
  
}
