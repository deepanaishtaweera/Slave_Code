
void OLED_Screen_Cycle()
{
    if (Disp == "CoinCollecting")
    {
        TurnCoinArm();
        TurnMagnet();
        delay(2000);
        Detect_Colour_OLED_Display();
        OpenCoinDoor();
        CloseCoinDoor();
        OpenCoinDoor();
        delay(1500);
        CloseCoinDoor();
    }
    else if (Disp == "WaterIn")
    {
        TurnServo(waterArmServo, WATER_ARM_INIT_ANGLE, WATER_ARM_TASK_ANGLE, 40);
        TakeWaterIn();
        delay(20000);
        StopMotor();
        TurnServo(waterArmServo, WATER_ARM_TASK_ANGLE, WATER_ARM_INIT_ANGLE, 40);
        }
    else if (Disp == "WaterOut")
    {
        TakeWaterOut();
    }
    else if (Disp == "ColourDetecting")
    {
        Detect_Colour_OLED_Display();
    }
    else if (Disp == "OpencoinDoor")
    {
        OpenCoinDoor();
        delay(1000);
        CloseCoinDoor();
    }
    OLED_Display(Disp);
}

/*

OLED_Display("IDLE MODE") ;//put this at the begining

int Count = 0;
if (digitalRead(BUTTON_LEFT) == HIGH){
    Disp = Option_List[Count];
    OLED_Display(Disp);
    Count = Count + 1;
    if (Count == 4){//number of items in the list
        Count = 0;
    }
    delay(500);
}
if (digitalRead(BUTTON_RIGHT) == HIGH){
    OLED_Screen_Cycle();
    delay(500);
}

*/