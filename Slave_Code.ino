#include "_Definitions.h"
#include "_Variables.h"

void setup()
{
    InitializeServo();
    InitializeMotor();
    initializeOLED();
    Master.begin(9600);
}

void loop()
{
    OLED_Display("Circuit Makers");
    delay(1000);
    OLED_Display("IDLE MODE"); //put this at the begining

    while (1)
    {
        if (digitalRead(BUTTON_LEFT) == HIGH)
        {
            Disp = Option_List[Count];
            OLED_Display(Disp);
            Count = Count + 1;
            if (Count == 7)
            { //number of items in the list
                Count = 0;
            }
            delay(500);
        }
        else if (digitalRead(BUTTON_RIGHT) == HIGH)
        {
            OLED_Screen_Cycle();
            delay(500);
        }
        else
        {
            TaskMode();
        }
    }
}

/*
 if (digitalRead(BUTTON_LEFT) == HIGH)
    {   
        TurnCoinArm();
        TurnMagnet();
        Detect_Colour_OLED_Display() ;
        OpenCoinDoor();
        delay(1000);
        CloseCoinDoor();
        delay(500);
    }
    else if (digitalRead(BUTTON_RIGHT) == HIGH)
    {
        TurnServo(waterArmServo, WATER_ARM_INIT_ANGLE, WATER_ARM_TASK_ANGLE, 20);
        WaterPumpTask();
        TurnServo(waterArmServo, WATER_ARM_TASK_ANGLE, WATER_ARM_INIT_ANGLE, 20);
        delay(500);
*/