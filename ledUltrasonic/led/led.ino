int trig = 11;
int echo = 12;
int ledPin = 13;



void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trig, LOW);
delayMicroseconds(10);
digitalWrite(trig, HIGH);
delayMicroseconds(15);
digitalWrite(trig, LOW);
long duration, distance;
duration = pulseIn(echo,HIGH);
distance = duration/58.8; //scaling the reading to centimeters
Serial.print(distance);
Serial.println(" cm");
//using ternary to switch LED state based on distance
distance <= 10 ? digitalWrite(ledPin,HIGH) : digitalWrite(ledPin,LOW);



}
