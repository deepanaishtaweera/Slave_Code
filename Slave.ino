#include <Servo.h>
#include "_Definitions.h"
#include "_Variables.h"

void setup() {
    InitializeServo();
    InitializeMotor();
}

void loop() {
    TakeWaterIn();
    delay(25000);
    StopMotor();
    delay(2000);
    TakeWaterOut();
    delay(25000);
    StopMotor();
    while (1) {
    }
}