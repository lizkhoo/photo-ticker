
#include <Stepper.h>
#include <Bridge.h>
#include <HTTPClient.h>

const int stepsPerRev = 200;

Stepper myStepper(stepsPerRev, 8,9,10,11);

int value = 0;
int inByte = 0;
char curPhoto = '0'; // which photo is currently on display?

// Hold switch and lights to signal state of Yun
int holdSwitch = 2;
int greenLED = 3;
int redLED = 4;

void setup() {
  Bridge.begin();
  Serial.begin(9600);
  myStepper.setSpeed(40);
  pinMode(greenLED, OUTPUT);     
  pinMode(redLED, OUTPUT);    
  pinMode(holdSwitch, INPUT); 
  while(!Serial);

}

void loop() {

}

void serialEvent() {

  while (Serial.available()) {  
    char inChar = (char)Serial.read();
    //Serial.println(inChar);
    //Serial.println(prevChar);

    /// initial connection established
    if (inChar == '111') {
      digitalWrite(greenLED, HIGH);
      delay(10000);
      digitalWrite(greenLED, LOW);
    }

    /// no connection
    if (inChar == '222') {
      digitalWrite(redLED, HIGH);
      delay(10000);
      digitalWrite(redLED, LOW);
    }

    if (inChar == 'hon') {
      digitalRead(holdSwitch == HIGH) {
        // query first is hold switch is on or not before allowing serial to switch image.
      }

      if(inChar =="hoff") {

        if (inChar == '1') {
          switch (prevChar) {
          case '1':
            myStepper.step(0);
            break;
          case '2':
            myStepper.step(10);
            break;
          case '3':
            myStepper.step(20);
            break;
          case '4':
            myStepper.step(30);
            break;
          case '5':
            myStepper.step(40);
            break;
          case '6':
            myStepper.step(50);
            break;
          case '7':
            myStepper.step(60);
            break;
          case '8':
            myStepper.step(70);
            break;
          case '9':
            myStepper.step(80);
            break;
          case '10':
            myStepper.step(90);
            break;
          case '11':
            myStepper.step(100);
            break;
          case '12':
            myStepper.step(110);
            break;
          case '13':
            myStepper.step(120);
            break;
          case '14':
            myStepper.step(130);
            break;
          case '15':
            myStepper.step(140);
            break;
          case '16':
            myStepper.step(150);
            break;
          case '17':
            myStepper.step(160);
            break;
          case '18':
            myStepper.step(170);
            break;
          case '19':
            myStepper.step(180);
            break;
          case '20':
            myStepper.step(190);
            break;  
          default:
            break;
          }
          
          // repeat logic from above for all 20 images.
        }
      }
    }

    if(inChar == 13 || inChar == 10){
      Serial.println("HELLO");
      //      return;
    }
    else{
      //    
    } 

  }
}






