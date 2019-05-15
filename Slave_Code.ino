#include <Servo.h>
#include "_Definitions.h"
#include "_Variables.h"
// I AM SAHAN
// I AM DEEPANA
// I AM SHALUTHA

void setup() {
    InitializeServo();
    InitializeMotor();
}

void loop() {
    WaterPumpTask();
    while (1) {
    }
}