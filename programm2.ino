#include <TimerOne.h>
#include <Wire.h>
#include <MultiFuncShield.h>

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;


void setup() {
  // put your setup code here, to run once:

  

  
  Timer1.initialize();
  MFS.initialize(&Timer1);    // initialize multi-function shield library

  MFS.writeLeds(LED_1, ON);  delay(100);
  MFS.writeLeds(LED_2, ON);  delay(100);
  MFS.writeLeds(LED_3, ON);  delay(100);
  MFS.writeLeds(LED_4, ON);  delay(100);


  MFS.writeLeds(LED_ALL, OFF); 
  
  
}

void loop() {
 
  byte btn = MFS.getButton();
  if(btn == BUTTON_1_PRESSED){
    
    delay (1000);
  MFS.write ("DU");   
  delay (2000);
  MFS.write ("BIST");   
  delay (2000);
  MFS.write ("COOL"); 
  delay (2000);


 
              MFS.beep(50, 50, 3);
              for (int i = 0; i <= 3; i++) {
                digitalWrite(led1, HIGH);
                digitalWrite(led2, HIGH);
                digitalWrite(led3, HIGH);
                digitalWrite(led4, HIGH);
                delay(250);
                digitalWrite(led1, LOW);
                digitalWrite(led2, LOW);
                digitalWrite(led3, LOW);
                digitalWrite(led4, LOW);
                delay(250);
              }

  MFS.writeLeds(led4, OFF);
  MFS.writeLeds(led3, OFF); 
  MFS.writeLeds(led2, OFF); 
  MFS.writeLeds(led1, OFF); 
 } else if(btn == BUTTON_2_PRESSED){

  delay (1000);
  MFS.write ("DU");   
  delay (2000);
  MFS.write ("BIST");   
  delay (2000);
  MFS.write ("TOLL"); 
  delay (2000);


 
              MFS.beep(20, 20, 3);
              for (int i = 0; i <= 3; i++) {
                digitalWrite(led1, HIGH);
                digitalWrite(led2, HIGH);
                digitalWrite(led3, HIGH);
                digitalWrite(led4, HIGH);
                delay(250);
                digitalWrite(led1, LOW);
                digitalWrite(led2, LOW);
                digitalWrite(led3, LOW);
                digitalWrite(led4, LOW);
                delay(250);
              }

  MFS.writeLeds(led4, OFF);
  MFS.writeLeds(led3, OFF); 
  MFS.writeLeds(led2, OFF); 
  MFS.writeLeds(led1, OFF); 
 }
 }
 
