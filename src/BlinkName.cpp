/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Nicholas/Dropbox/Uni/SIT-210/Week2/BlinkName/BlinkName/src/BlinkName.ino"
 // We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
void setup();
void loop();
#line 5 "c:/Users/Nicholas/Dropbox/Uni/SIT-210/Week2/BlinkName/BlinkName/src/BlinkName.ino"
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop()
{
  //N
	// On
	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(3s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
	// On
	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(3s);

  // I
	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
	// On
	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(3s);

  // C
	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(3s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
	// On
	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
  digitalWrite(MY_LED, HIGH);
	// Wait
	delay(3s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
	// On
	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(3s);

  //H
  digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
	// On
	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
  digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
  digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
	// Of
	digitalWrite(MY_LED, LOW);
	// Wait
	delay(3s);

  //O
 //On
 digitalWrite(MY_LED, HIGH);
	// Wait
	delay(3s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(3s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(3s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(3s);

  // L
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(3s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s); 
  digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(3s);

  // A
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(3s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);

  // S
 digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(1s);
   digitalWrite(MY_LED, HIGH);
	// Wait
	delay(1s);
  // Off
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(3s);

	digitalWrite(MY_LED, HIGH);
	// Wait
	delay(10s);
  digitalWrite(MY_LED, LOW);
	// Wait
	delay(3s);

	// And repeat!
}