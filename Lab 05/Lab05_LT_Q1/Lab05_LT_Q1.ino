#include <DHT.h> //Including library to be used in the code

#define DHTPIN 10 // // Defining digital pin port for sensor
#define DHTTYPE DHT22 // DHT22 (AM2302)

DHT dht(DHTPIN, DHTTYPE); // Creating an object called dht while defining arguements (pin and type) and storing this into DHT

void setup() {
  Serial.begin(9600); // Calling serial monitor for data display
  dht.begin(); // Calling library for temperature input and calculations
}

void loop() {
  delay(1000); // Adding a time delay
  float humidity = dht.readHumidity(); // Defining variable to store humidity value from library function
  Serial.print("Current Room Humidity is: "); // Printing data to serial monitor
  Serial.print(humidity); // Printing value of humidity to serial monitor
  Serial.println("%"); // Printing percentage unit to serial monitor
}