#include "DHT.h"

#define DHTPIN 2

#define DHTTYPE DHT22


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHTxx test!");

  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float h = dht.readHumidity();

  float t = dht.readTemperature();

  float f = dht.readTemperature(true);


  if (isnan(h) || isnan(t) || isnan(f)){
    Serial.print("Failed to read from DHT sensor!");
    return;
  }

  //Compute heat index in fahrenheit(defualt)
  float hif = dht.computeHeatIndex(f, h);

  //compute heat index in celsius (isfahrenheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Heat Index: ");
  Serial.print(hic);
  Serial.print(" *c ");
  Serial.print(hif);
  Serial.print(" *F");
}
