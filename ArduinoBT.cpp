// Do not remove the include below
#include "ArduinoBT.h"
#include "SoftwareSerial.h"

SoftwareSerial bt(4,5);

void setup(){
	pinMode(12,OUTPUT);
	digitalWrite(12,LOW);
  delay(3000);
  Serial.begin(9600);
  bt.begin(9600);
  Serial.println("Bluetooth Iniciado.");
  delay(1000);

}

void loop(){
  char M;

  char data;
  for(;;){
    if(Serial.available()){
    	data = Serial.read();
    	bt.print(data);
    	if(data == '\r')Serial.println(""); else Serial.print(data);
    }
    if(bt.available()){
    	M = bt.read();
    	Serial.write(M);
    	if(M == 'A'){
    		digitalWrite(13,HIGH);
    	}
    	if(M == 'B'){
    		digitalWrite(13,LOW);
    	}
    	M = 0;
    }
  }

}
