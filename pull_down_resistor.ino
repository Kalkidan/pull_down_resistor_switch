
//Initial switch state holder
int switchState =0;

void setup() {
 //Define all the output and input nodes
 //These are pins that are defined on the 
 //Arduino board 
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(2, INPUT);

}

void loop() {

  //Read from the pin number 2
  //This is linked to the pull down resistor
  //in order to help us read 0 and 5 volts. 
  switchState = digitalRead(2); 

  if(switchState == LOW){

    //This means the switch is still not pressed
    //So blink the green only
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

  } else {
    //This is where the button is clicked
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    //Add a delay
    delay(250); //Wait for a quarter of a second 
    //and start toggling the LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); // Hold it for a quarter of a second.
    
    }
}
