byte trig = 11;
byte echo = 12;
byte ledPin = 13;



void setup() {
pinMode(red, OUTPUT);display
pinMode(yellow, OUTPUT);display
pinMode(green, OUTPUT);display
Serial.begin(9600);
}

void loop() {
digitalWrite(red, HIGH);
delayMicroseconds(100);
digitalWrite(yellow, HIGH);
delayMicroseconds(5000);
digitalWrite(green, LOW);
delayMicroseconds(1000)
long duration, distance;
duration = pulseIn(echo,HIGH);
distance = duration/58.8;
Serial.print(distance);
Serial.println(" cm");

distance <= 10 ? digitalWrite(ledPin,HIGH) : digitalWrite(ledPin,LOW);



}
