#include <Servo.h>
#include "_Definitions.h"
#include "_Variables.h"

void setup() {
    InitializeServo();
    InitializeMotor();
}

void loop() {
    TurnMagnet();
    while (1) {
    }
}