#include "_Definitions.h"
#include "_Variables.h"

void setup() {
    InitializeServo();
    InitializeMotor();
    initializeOLED();
}

void loop() {
    if (digitalRead(BUTTON_LEFT) == HIGH)
    {
        TurnCoinArm();
        TurnMagnet();
        Detect_Colour_OLED_Display() ;
        OpenCoinDoor();
        delay(1000);
        CloseCoinDoor();
    }
    if (digitalRead(BUTTON_RIGHT) == HIGH)
    {
        TurnServo(waterArmServo, WATER_ARM_INIT_ANGLE, WATER_ARM_TASK_ANGLE, 20);
        WaterPumpTask();
        TurnServo(waterArmServo, WATER_ARM_TASK_ANGLE, WATER_ARM_INIT_ANGLE, 20);
    }
        while (1)
        {
        }
}