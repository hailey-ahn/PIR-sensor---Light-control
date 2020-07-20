
int count = 0;  // define a new variable 'count' 
	        // and set the default value to be 0

void setup() {
    // setup code, this is run once:
    Serial.begin(9600);     //Allow serial communication between MSP430 and the computer
    pinMode(8, INPUT);      //Pins are set up as input or output
    pinMode(7, INPUT);
    pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
}

void loop() {         //Run repeatedly 

    if(digitalRead(8) == HIGH)  //Run this when Pin8 is HIGH
    {
      digitalWrite(6, HIGH);    //Turn on LED 1 
      delay(500);
      ++count;                  //increase count number by 1
      Serial.print(count);      //print the count number on serial monitor
      Serial.println();
      digitalWrite(6, LOW);     //Turn off LED 1
      delay(3000);
    }  
    else if(digitalRead(7) == HIGH)  //Run this when the first
    {				 //condition fails and Pin7 is HIGH
      digitalWrite(5, HIGH);       //Turn on LED2
      delay(500);
      --count;                     //subtract 1 from count
      Serial.print(count);
      Serial.println();
      digitalWrite(5, LOW);        //Turn off LED2
      delay(3000);
    }
      if (count > 0){              //Run this when count>0
      digitalWrite(3, HIGH);       //Turn on room light 
      }
      else{                        //Run this when count=0
      digitalWrite(3, LOW);        //Turn off room light
      }
}