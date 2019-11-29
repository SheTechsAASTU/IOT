const photPin = A1; // to read analog value of photoresistor
const buzzerPin = 7; // to controll buzzer
long buzzerFreq; // The frequency to buzz the buzzer

// You can experiment with these values:
long BUZZ_FREQ_MAX = 2500; // Maximum frequency for the buzzer
long PR_MAX = 1023; // Maximum value for the photoresistor
int value = 0;  //initialize sensor value

void setup() {
  pinMode(photoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

    value = analogRead(photPin); // Values 0-1023
    buzzerFreq = (value * BUZZ_FREQ_MAX) / PR_MAX;
    buzz(buzzerPin, buzzerFreq, 10);

}



void buzz(int targetPin, long frequency, long length) {

    long delayValue = 1000000/frequency/2;
    long numCycles = frequency * length/ 1000;

    for (long i=0; i < numCycles; i++){
        digitalWrite(targetPin,HIGH);
        delayMicroseconds(delayValue);
        digitalWrite(targetPin,LOW);
        delayMicroseconds(delayValue);
    }

}
