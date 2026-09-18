void setup() {
  Serial.begin(115200);
  int brightnessSetting = 75;
  bool switchOn = true;
  int lampBrightness = 0;

  lampBrightness = getLampBrightness(switchOn, brightnessSetting);

  Serial.print("Brightness setting: ");
  Serial.println(brightnessSetting);

  Serial.print("Lamp brightness: ");
  Serial.println(lampBrightness);
}

void loop() {
}

int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}
