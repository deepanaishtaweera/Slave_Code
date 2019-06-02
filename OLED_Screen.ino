
void OLED_Screen_Cycle()
{
    if (Disp == "CoinCollecting")
    {
        TurnCoinArm();
        TurnMagnet();
        delay(500);
        Detect_Colour_OLED_Display();
        OpenCoinDoor();
        delay(1000);
        CloseCoinDoor();
    }
    else if (Disp == "WaterIn")
    {
        TakeWaterIn();
    }
    else if (Disp == "WaterOut")
    {
        TakeWaterOut();
    }
    else if (Disp == "ColourDetecting")
    {
        Detect_Colour_OLED_Display();
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