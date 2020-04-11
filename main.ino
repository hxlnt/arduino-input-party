// INCLUDED LIBRARIES


// GLOBAL CONSTANTS
int sampleLEDPin = 1;
int sampleInterruptPin = 2;

// GLOBAL VARIABLES
bool buttonPressed;

// SETUP 
void setup() {

  Serial.begin(9600);
  Serial.println("Hello!");

  pinMode(sampleLEDPin, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(sampleInterruptPin), sampleRisingInterruptFunction, RISING);
  attachInterrupt(digitalPinToInterrupt(sampleInterruptPin), sampleFallingInterruptFunction, FALLING);

}

// MAIN LOOP 
void main() {

  if (buttonPressed == true) { digitalWrite(sampleLEDPin, HIGH); } else { digitalWrite(sampleLEDPin, LOW); }

}

// HARDWARE INTERRUPTS
void sampleRisingInterruptFunction() {

  buttonPressed = true;

}

void sampleFallingInterruptFunction() {

  buttonPressed = false;

}
