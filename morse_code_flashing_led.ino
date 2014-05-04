/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
//yj Integer representing dit (morse ' . ')
int dit = 500;
//yj Interger representing dah (morse ' - '>)
//yj Testing a multiple of another constant integer to make the timing scalable.
int dah = dit*3;
int blankTime = 100;

//buttons
int inputPin1 = 3;
int val;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(inputPin1, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  val = digitalRead(inputPin1);
  if (val == LOW) {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dah);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dah);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dah);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  }
  if (val == HIGH) {
    digitalWrite(led, LOW);
  }
  

}
