#include <Servo.h>
#include "_Definitions.h"
#include "_Variables.h"
// I AM SAHAN
// I AM DEEPANA
// I AM SHALUTHA
// I AM DILANKA

void setup() {
    InitializeServo();
    InitializeMotor();
}

void loop() {
    WaterPumpTask();
    while (1) {
    }
}