
const int potPin = A0; //pin A0 to read potentiometer value
const int photPin = A1; //pin A1 to read photoressistor value
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
int buttonState = 0;         // variable for reading the pushbutton status
int value = 1000;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT);  // initialize the pushbutton pin as an input:
  pinMode(potPin, INPUT); //Optional 
}

void loop() {
  value = analogRead(potPin);    //Read and save analog value from potentiometer
  buttonState = digitalRead(buttonPin);
  if(buttonState==HIGH)
    digitalWrite(ledPin, HIGH);
   else 
    digitalWrite(ledPin,LOW);

//action to be completed 
//  <<read sensors value>> first potentiometer and then photo resistor 
//    <<call blink function>>
//   <<read value from computer>>
//    <<call blink function>>
}

void led_blink(int d){
  digitalWrite(ledPin, HIGH);
  delay(d);
  digitalWrite(ledPin, LOW);
  delay(d);
  }

int read_senor_value(int pin){
  int value = analogRead(pin);
  return value;
  }
int receive_serial(){
  char ch;
    if ( Serial.available())  { 
    char ch = Serial.read();
    }
  return ch;
  }
 
