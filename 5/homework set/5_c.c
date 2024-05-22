#include <stdio.h>

void checkTemperature(float temp) {
  const float hotThreshold = 30.0; // Threshold for "Hot"
  const float coldThreshold = 10.0;   // Threshold for "Cold"

  if (temp >= hotThreshold) {
    printf("Hot\n");
  } else if (temp < coldThreshold) {
    printf("Cold\n");
  } else {
    printf("Neither hot nor cold.\n"); // Optional message for moderate temperature
  }
}

int main() {
  float temperature;

  printf("Enter the temperature (in degrees Celsius): ");
  scanf("%f", &temperature);

  checkTemperature(temperature);

  return 0;
}
