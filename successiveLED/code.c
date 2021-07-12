// C++ code
void setup(){
	pinMode( 13£¬OUTPUT) ; 
	pinMode ( 12 , OUTPUT) ; 
	pinMode ( 11 , OUTPUT) ; 
	pinMode( 10, OUTPUT) ;
	pinMode(9,OUTPUT);
}
void loop(){
	for(int i=0;i<5;i++){
	digitalWrite(13-i,HIGH);
	delay(500);
	digitalWrite(13-i,LOW);
	}
}
