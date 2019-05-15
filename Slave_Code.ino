#include <Servo.h>
#include "_Definitions.h"
#include "_Variables.h"
// I AM SAHAN
void setup() {
    InitializeServo();
    InitializeMotor();
}

void loop() {
    WaterPumpTask();
    while (1) {
    }
}