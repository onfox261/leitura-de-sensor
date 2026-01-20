// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h>




#define TRIGGER_PIND  49  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIND    48  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCED 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.


NewPing sonarD(TRIGGER_PIND, ECHO_PIND, MAX_DISTANCED); // NewPing setup of pins and maximum distance.

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
}

void loop() {


    delay(50);                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping DIREITA: ");
  Serial.print(sonarD.ping_cm()); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
}
