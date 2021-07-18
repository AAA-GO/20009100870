// C++ code
//
#include <MsTimer2.h>
int ten=0;
int tick=0;
int readin=0;
void setup()
{
  Serial.begin(9600);
  for(int i=8;i<=13;i++){
  pinMode(i, OUTPUT);
  }
  pinMode(7, INPUT);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  MsTimer2::set(1000,onTimer);
  MsTimer2::start();
}  

void onTimer(){
  tick++;
  ten+=tick/10;
  tick=tick%10;
  if(ten==10){
  	ten=0;
    tick=0;
  }
  Serial.println(ten*10+tick);
  for(int i=0;i<4;i++){
    digitalWrite(12,LOW);
  	digitalWrite(i+8,((ten>>i)&0x1));
  	digitalWrite(12,HIGH);
  }
  for(int i=0;i<4;i++){
    digitalWrite(13,LOW);
    digitalWrite(i+8,((tick>>i)&0x1));
    digitalWrite(13,HIGH);
	}
  
}
void loop()
{
  if(digitalRead(7)==LOW){
    ten=0;
    tick=-1;
  }
}