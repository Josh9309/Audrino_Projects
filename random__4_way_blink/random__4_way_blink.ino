/* what this code does is it takes 4 leds and randomize the time in which one Led is on for a random amount of time and then turns off for a random amount of time. this repeats for the next 3 led but the time it's on and
the time it is off is different each time. So to sum it up this code is a random time on and Off generator for 4 Leds.
*/
int ledPin = 13;                  // LED connected to digital pin 13
int ledPin2= 12;                  // LED connected to digital pin 12
int ledPin3= 11;                  // LED connected to digital pin 11
int ledPin4= 10;                  // LED connected to digital pin 10



long randLed = 0;                 // initialize a variable for random led

long randOn = 0;                  // Initialize a variable for the ON time for first led randomizer
long randOn2 = 0;                 // Initialize a variable for the ON time for second led randomizer
long randOn3 = 0;                 // Initialize a variable for the ON time for third led randomizer
long randOn4 = 0;                 // Initialize a variable for the ON time for fourth led randomizer

long randOff = 0;                 // Initialize a variable for the OFF time for first led randomizer
long randOff2 = 0;                // Initialize a variable for the OFF time for second led randomizer
long randOff3 = 0;                // Initialize a variable for the OFF time for third led randomizer
long randOff4 = 0;                // Initialize a variable for the OFF time for fourth led randomizer


void setup()                      // run once, when the sketch starts
{
  randomSeed (analogRead (0));    // randomize
  pinMode(ledPin, OUTPUT);        // sets the digital pin as output
  pinMode(ledPin2,OUTPUT);        // sets ledPin2 as an output
  pinMode(ledPin3,OUTPUT);        // sets ledPin3 as an output
  pinMode(ledPin4,OUTPUT);        // sets ledPin4 as an output
}

void loop()                       // run over and over again
{
  randLed= random (1, 4);        // generate random values between 1 and 4
  
  randOn = random (100, 2000);      // generate ON time between 0.1 and 2 seconds
  randOn2 = random (100, 2000);  // generate ON time between 0.1 and 2 seconds
  randOn3 = random (100, 2000);  // generate ON time between 0.1 and 2 seconds
  randOn4 = random (100, 2000);  // generate ON time between 0.1 and 2 seconds
  
  randOff = random (200, 900);    // generate OFF time between 0.2 and 0.9 seconds
  randOff2 = random (200, 900);   // generate OFF time between 0.2 and 0.9 seconds
  randOff3 = random (200, 900);   // generate OFF time between 0.2 and 0.9 seconds
  randOff4 = random (200, 900);   // generate OFF time between 0.2 and 0.9 seconds
   
    if(randLed=1)                 //if value from randLed is one turn on ledPin
    {
    digitalWrite(ledPin, HIGH);   // sets the LED on
    delay(randOn);                // waits for a random time while ON
    }
    else                          // if value is not 1 led is off
   { 
     digitalWrite(ledPin, LOW);    // sets the LED off
   }
   
   digitalWrite(ledPin, LOW);   //turns led off
   delay(randOff);              // for random amount of time
   
   if(randLed =2)                   // if value from randLed is 2 turn on ledPin2
    {digitalWrite(ledPin2, HIGH);   // sets the LED on
    delay(randOn2);                // waits for a random time while ON
    }
    else                           // if value is not 2 led is off
   { 
     digitalWrite(ledPin2, LOW);    // sets the LED off
   }
   
   digitalWrite(ledPin2, LOW);   //turns led2 off
   delay(randOff2);              //for time given from randOFF2
   
   if(randLed=3)                  // if value from randLed is 3 turn ledPin3 on
    {digitalWrite(ledPin3, HIGH);   // sets the LED on
    delay(randOn3);                // waits for a random time while ON
    }
    else                          // if value is not 3 ledPin3 is OFF
   { 
     digitalWrite(ledPin3, LOW);    // sets the LED off
   }
   digitalWrite(ledPin3, LOW);  // turns ledPin3 off
   delay(randOff3);             // for time given by randOff3
   
   if(randLed=4)                // if value from randLed is 4 turn ledPin4 on
    {digitalWrite(ledPin4, HIGH);   // sets the LED on
    delay(randOn4);                // waits for a random time while ON
    }
    else                       // if value is not 4 ledPin4 is off
   { 
     digitalWrite(ledPin4, LOW);    // sets the LED off
   }
   
    digitalWrite(ledPin,LOW);       // make sure LedPin1
    digitalWrite(ledPin2,LOW);      // ledPin2
    digitalWrite(ledPin3,LOW);      // ledPin3
    digitalWrite(ledPin4,LOW);      // ledPin4 is off
    delay(randOff4);               // for time given by randOff3
    
}
