#include <TimerOne.h>
#include <Wire.h>
#include <MultiFuncShield.h>

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int display = 0;

void setup() {
  // put your setup code here, to run once:

  

  
  Timer1.initialize();
  MFS.initialize(&Timer1);    // initialize multi-function shield library

  MFS.writeLeds(LED_1, ON);  delay(100);
  MFS.writeLeds(LED_2, ON);  delay(100);
  MFS.writeLeds(LED_3, ON);  delay(100);
  MFS.writeLeds(LED_4, ON);  delay(100);


  MFS.writeLeds(LED_ALL, OFF); 

  MFS.write (display);
  }

void loop() {
  byte btn = MFS.getButton();
  if (btn) { // der Status, dass die LEDs blinken, ist noch erhalten
    if (btn == BUTTON_1_LONG_RELEASE) { MFS.beep(15); MFS.writeLeds(LED_1, OFF);} 
    else if (btn == BUTTON_1_SHORT_RELEASE) { MFS.beep(5); MFS.writeLeds(LED_1, OFF);}
    else if (btn == BUTTON_2_LONG_RELEASE) { MFS.beep(15,5,2); MFS.writeLeds(LED_2, OFF);} 
    else if (btn == BUTTON_2_SHORT_RELEASE) { MFS.beep(5,5,2); MFS.writeLeds(LED_2, OFF);}
    else if (btn == BUTTON_3_LONG_RELEASE) { MFS.beep(15,5,3); MFS.writeLeds(LED_3, OFF);} 
    else if (btn == BUTTON_3_SHORT_RELEASE) { MFS.beep(5,5,3); MFS.writeLeds(LED_3, OFF);}
    else if (btn == BUTTON_1_PRESSED) { MFS.writeLeds(LED_1, ON); display++;   }
    else if (btn == BUTTON_2_PRESSED) { MFS.writeLeds(LED_2, ON); display=display+2;}
    else if (btn == BUTTON_3_PRESSED) { MFS.writeLeds(LED_3, ON);display=display+3;}
  }
MFS.write (display);
  //MFS.write(analogRead(POT_PIN));  // Wert des Potentiometers laufend ausgeben

 
}


 
