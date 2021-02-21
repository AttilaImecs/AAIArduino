/*
  Fade Blink slowly turns on an LED (increase in intensity of voltage over the course of 1 second and 
  then turns off slowly over 1 second.  Then repeats.  All done using analog input.
  Turns on an LED on for one second, then off for one second, repeatedly.
 */
 
// Pin 9 has an LED connected on most Arduino boards.
// give it a name:
int led = 8;
int brightness = 0;
int fade_rate = 10;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(led,brightness);
  brightness = brightness + fade_rate;
  if (brightness == 0 || brightness == 260) {
    fade_rate = -fade_rate;
    brightness = brightness + fade_rate; 
  }
  delay(20);               // wait for 20 milliseconds
}
