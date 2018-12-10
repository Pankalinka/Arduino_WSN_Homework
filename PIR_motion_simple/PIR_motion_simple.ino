#define DIGITAL_INPUT_MOTION 16
#define DIGITAL_OUTPUT_LED 14

void setup() {
  // put your setup code here, to run once:
  pinMode(DIGITAL_INPUT_MOTION, INPUT);
  pinMode(DIGITAL_OUTPUT_LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    bool tripped = digitalRead(DIGITAL_INPUT_MOTION);
    if (tripped == HIGH) {
        digitalWrite(DIGITAL_OUTPUT_LED, HIGH); 
           }
    else {
        digitalWrite(DIGITAL_OUTPUT_LED, LOW);
           }
    delay(1);
      //Serial.print("Motion: ");
      //Serial.println(tripped);
}
