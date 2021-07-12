// C++ code
//
//char interface[8]="0abcdefg";
int temp[7];
int ref[9][7]={{8,2,3,4,5,6},{2,3},{8,2,7,5,4},{8,2,3,4,7},
{6,7,2,3},{8,6,7,3,4},{8,6,5,4,3,7},{8,2,3},{8,2,3,4,5,6,7}};
void setup()
{
  for(int i=2;i<=8;i++){
  pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
  Serial.println("Ready");
    for(int k=2;k<=8;k++){
  digitalWrite(k,HIGH);
  }
}

  
void loop()
{
  if(Serial.available()>0){
  int number=Serial.read()-'0';
    //Serial.println(number);
  for(int k=2;k<=8;k++){
  digitalWrite(k,HIGH);
  }
  for(int i=0;i<sizeof(ref[number])/sizeof(int);i++){
  digitalWrite(ref[number][i],LOW);
  }
    delay(1000);
  }
  
}