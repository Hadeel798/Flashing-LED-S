
#define led1 0
#define led2 1
#define led3 4
#define led4 5 
#define led5 7
#define led6 9 

int d=500;

void setup() {
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}

void loop() {
  
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  delay(d);
    digitalWrite(led1,0); 
    digitalWrite(led2,1);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    digitalWrite(led6,0);
    delay(d);
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,1);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    digitalWrite(led6,0);
    delay(d);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
  digitalWrite(led5,0); 
  digitalWrite(led6,0);
  delay(d);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,1);
  digitalWrite(led6,0);
  delay(d);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,1);
  delay(d);
}
