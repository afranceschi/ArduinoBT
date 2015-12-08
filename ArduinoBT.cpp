// Do not remove the include below
#include "ArduinoBT.h"


//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here

	pinMode(13,OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{

	for(;;){
		digitalWrite(13,!digitalRead(13));
		delay(1000);
	}
//Add your repeated code here
}
