// Blink 8 LEDS

int Pin0 = 2;   // led0 is connected to digital pin 2
int Pin1 = 3;   // led1 is connected to digital pin 3
int Pin2 = 4;   // led2 is connected to digital pin 4
int Pin3 = 5;   // led3 is connected to digital pin 5
int Pin4 = 6;   // led4 is connected to digital pin 6
int Pin5 = 7;   // led5 is connected to digital pin 7
int Pin6 = 8;   // led6 is connected to digital pin 8
int Pin7 = 9;   // led7 is connected to digital pin 9

void setup()                      
{
  pinMode (Pin0, OUTPUT);   // sets 0 pin as output
  pinMode (Pin1, OUTPUT);   // sets 1 pin as output
  pinMode (Pin2, OUTPUT);   // sets 2 pin as output
  pinMode (Pin3, OUTPUT);   // sets 3 pin as output
  pinMode (Pin4, OUTPUT);   // sets 4 pin as output
  pinMode (Pin5, OUTPUT);   // sets 5 pin as output
  pinMode (Pin6, OUTPUT);   // sets 6 pin as output
  pinMode (Pin7, OUTPUT);   // sets 7 pin as output
}

void loop()                         //repeats the following steps
{
  digitalWrite (Pin0, HIGH);   //turn the 0led on 
  digitalWrite (Pin1, HIGH);   //turn the 1led on 
  digitalWrite (Pin2, HIGH);   //turn the 2led on 
  digitalWrite (Pin3, HIGH);   //turn the 3led on 
  digitalWrite (Pin4, HIGH);   //turn the 4led on  
  digitalWrite (Pin5, HIGH);   //turn the 5led on
  digitalWrite (Pin6, HIGH);   //turn the 6led on
  digitalWrite (Pin7, HIGH);   //turn the 7led on 
  
  delay (500);                 //keep the leds this way for 0.5 seconds
  
  digitalWrite (Pin0, LOW);    //turn the 0led off
  digitalWrite (Pin1, LOW);    //turn the 1led off
  digitalWrite (Pin2, LOW);    //turn the 2led off
  digitalWrite (Pin3, LOW);    //turn the 3led off
  digitalWrite (Pin4, LOW);    //turn the 4led off
  digitalWrite (Pin5, LOW);    //turn the 5led off
  digitalWrite (Pin6, LOW);    //turn the 6led off
  digitalWrite (Pin7, LOW);    //turn the 7led off
  
  delay (500);                 //keep the leds this way for 0.5 seconds
}
