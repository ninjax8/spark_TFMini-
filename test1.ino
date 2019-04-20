#include <TFMini-Public.h>

TFMini tfmini;

void setup() {
    Serial.begin(115200);
    Serial1.begin(115200);
    delay(200);
    tfmini.begin(&Serial1);
}

void loop() {
    
  uint16_t dist = tfmini.getDistance();
  uint16_t strength = tfmini.getRecentSignalStrength();

  // Display the measurement
  Serial.print(dist);
  Serial.print(" cm      sigstr: ");
  Serial.println(strength);

  // Wait some short time before taking the next measurement
  delay(25);

}