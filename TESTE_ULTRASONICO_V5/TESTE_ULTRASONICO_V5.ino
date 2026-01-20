// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h>



#define TRIGGER_PIN  32  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN    33  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

#define TRIGGER_PIND  34  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIND     35 // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCED 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

#define TRIGGER_PINE  30  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PINE    31 // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCEE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.


NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
NewPing sonarD(TRIGGER_PIND, ECHO_PIND, MAX_DISTANCED); // NewPing setup of pins and maximum distance.
NewPing sonarE(TRIGGER_PINE, ECHO_PINE, MAX_DISTANCEE); // NewPing setup of pins and maximum distance.

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
}

void loop() {
    delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping FRENTE: ");
  Serial.print(sonar.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");

    delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping DIREITA: ");
  Serial.print(sonarD.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");

      delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping ESQUERDA: ");
  Serial.print(sonarE.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
}
