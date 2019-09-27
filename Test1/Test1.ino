
int ledPin[] = {13, 12, 11};
int inc = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(inc ==3){
      for (int i = 0; i <= 2; i++) {
        digitalWrite(ledPin[i], LOW);
  }
    inc = 0;
    delay(1000);
  }
  digitalWrite(ledPin[inc], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  inc = inc +1;

}
