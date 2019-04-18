/*
	This simple sketch monitors a digital GPIO pin and when it goes
	low it sounds an alarm as it means the door was locked without
	the power being switched off first.
*/

#include "Arduino.h"

void setup()
{
	Serial.begin(9600);

	// Door Lock Sensor pin (from the opto interrupter)
	// HIGH means unlocked, LOW means light beam interrupted, so lock has been thrown)
	pinMode(4, INPUT);

	// Buzzer output
	pinMode(11, OUTPUT);
	digitalWrite(11, LOW);

	Serial.println("Setup completed.");
}

void loop()
{
	// On closing door there is some sort of momentary LOW condition caused by light reflection
	if (digitalRead(4) == LOW) {
		delay(500);

		// Check pin 4 is ALWAYS high
		while (digitalRead(4) == LOW) {
			digitalWrite(11, HIGH);
			delay(250);
			digitalWrite(11, LOW);
			delay(250);
		}
	}
}
