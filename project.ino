
const int HEARTBEAT_SENSOR_PIN = A0;
const int BUZZER_PIN = 8;
const int LED_PIN = 13;


int heartbeat = 0;
int buzzerState = LOW;
int ledState = LOW;

void setup() {
  
  pinMode(HEARTBEAT_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
 
  heartbeat = analogRead(HEARTBEAT_SENSOR_PIN);

  
  if (heartbeat > 500) {
    ledState = HIGH;
  } else {
    ledState = LOW;
  }

 
  if (heartbeat > 500) {
    buzzerState = HIGH;
  } else {
    buzzerState = LOW;
  }

 
  digitalWrite(LED_PIN, ledState);
  digitalWrite(BUZZER_PIN, buzzerState);

  
  delay(50);
}
