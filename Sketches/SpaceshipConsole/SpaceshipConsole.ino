int switchState = 0;
int switchPin = 7;
int greenLight = 6;
int red1Light = 4;
int red2Light = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(red1Light, OUTPUT);
  pinMode(red2Light, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(switchPin);

  if (switchState == LOW) {
    digitalWrite(red1Light, LOW);
    digitalWrite(red2Light, LOW);
    digitalWrite(greenLight, HIGH);
  }
  else {
    digitalWrite(red1Light, HIGH);
    digitalWrite(red2Light, LOW);
    digitalWrite(greenLight, LOW);

    delay (300);

    digitalWrite(red1Light, LOW);
    digitalWrite(red2Light, HIGH);

    delay (300);
  }
}
