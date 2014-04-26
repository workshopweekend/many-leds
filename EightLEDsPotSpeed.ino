/* Knight Rider 2
 * --------------
 *
 * Reducing the amount of code using for(;;).
 *
 *
 * (cleft) 2005 K3, Malmo University
 * @author: David Cuartielles
 * @hardware: David Cuartielles, Aaron Hallborg
 */

int pinArray[] = {2, 3, 4, 5, 6, 7, 8, 9};
int count = 0;
int timer = 10;
int levelInput = A0;

void setup(){
  // we make all the declarations at once
  for (count=0;count<8;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
 // Serial.begin(9600); // use this to activate the Serial Monitor
}

void loop() {
int timer = analogRead(levelInput);
//Serial.println(levelValue);  // Use this to Debug the pot as needed
  for (count=0;count<=7;count++) {
   digitalWrite(pinArray[count], HIGH);
  }
  delay(timer);
  for (count=0;count<=7;count++) {
   digitalWrite(pinArray[count], LOW);
  }
  delay(timer);
}
