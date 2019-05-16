#include "_Definitions.h"
#include "_Variables.h"

void setup() {
    InitializeServo();
    InitializeMotor();
    initializeOLED();
}

void loop() {
    TurnCoinArm();
    TurnMagnet();
    Detect_Colour_OLED_Display() ;
    OpenCoinDoor();
    delay(1000);
    CloseCoinDoor();
    while (1){
    }
}