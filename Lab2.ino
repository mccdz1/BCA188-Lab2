/*
 * Course: BCA188
 * Laboratory Activity 2: Control a Lamp's Brightness
 */

// Function: determines lamp brightness based on switch state
int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}

void setup() {
  Serial.begin(115200);

  // Variables simulating device inputs
  int brightnessSetting = 75; // Tested values: 0, 50, 100
  bool switchOn = true;       // Tested values: true (On), false (Off)

  // Call the function and store the result
  int lampBrightness = getLampBrightness(switchOn, brightnessSetting);

  // Print results
  Serial.print("Brightness setting: ");
  Serial.println(brightnessSetting);

  Serial.print("Lamp brightness: ");
  Serial.println(lampBrightness);
}

void loop() {
  // Empty - simulation runs once in setup()
}
