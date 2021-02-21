/*
  Fade Blink slowly turns on an LED (increase in intensity of voltage over the course of 1 second and 
  then turns off slowly over 1 second.  Then repeats.  All done using analog input.
  Turns on an LED on for one second, then off for one second, repeatedly.
 */
 
// Pin 9 has an LED connected on most Arduino boards.
// give it a name:
int ledG = 9;
int ledR = 11;
int brightnessG = 0;
int brightnessR = 254;
int fade_rateG = 5;
int fade_rateR = -5;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledG, OUTPUT);
  pinMode(ledR,OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(ledG,brightnessG);
  analogWrite(ledR,brightnessR);
  brightnessG = brightnessG + fade_rateG;
  brightnessR = brightnessR + fade_rateR;
  
  if (brightnessG <= 0 || brightnessG >= 255) {
    fade_rateG = -fade_rateG;
    brightnessG = brightnessG + fade_rateG;
  }


  if (brightnessR <= 0 || brightnessR >= 255) {
    fade_rateR = -fade_rateR;
    brightnessR = brightnessR + fade_rateR;
  }
  
  delay(20);               // wait for 20 milliseconds
}
