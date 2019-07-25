void MasterCom()
{
    if (Master.available())
    {
        char message = Master.read();
        OLED_Display(String(message));

        if (message == 65)
        {
            Master.write(65);
            Master.flush();
        }
    }
}

void WaitforMain(char Text)
{
    while (1)
    {
        if (Master.available())
        {
            char message = Master.read();
            if (message == Text)
            {
                break;
            }
        }
    }
}
void TaskMode()
{
    if (Master.available())
    {
        char message = Master.read();
        if (message == 66)
        {
            TurnServo(coinArmServo, COIN_ARM_INIT_ANGLE, COIN_ARM_TASK_ANGLE, 5);
            Master.write(65);
            WaitforMain(66);
            TurnServo(coinArmServo, COIN_ARM_TASK_ANGLE, COIN_DROP_ANGLE, 10);
            TurnMagnet();
            delay(1500);
            Detect_Colour_OLED_Display();

            if (Colour == "RED")
            {
                Master.write(70);
            }
            else if (Colour == "GREEN")
            {
                Master.write(71);
            }
            else if (Colour == "BLUE")
            {
                Master.write(72);
            }

            OLED_Display(Colour);
        }
        else if (message == 68)
        {
            TurnServo(coinArmServo, COIN_ARM_INIT_ANGLE, COIN_ARM_TASK_ANGLE, 5);
            magnetServo.write(20);
            delay(500);
            OpenCoinDoor();
            delay(1000);
            magnetServo.write(MAGNET_INIT_ANGLE);
            TurnServo(coinArmServo, COIN_ARM_TASK_ANGLE, COIN_DROP_ANGLE, 10);
            Master.write(73);
            CloseCoinDoor();
            digitalWrite(Red, LOW);
            digitalWrite(Green, LOW);
            digitalWrite(Blue, LOW);
        }
        else if (message == 69)
        {
            TurnServo(waterArmServo, WATER_ARM_INIT_ANGLE, WATER_ARM_TASK_ANGLE, 40);
            TakeWaterIn();
            delay(12000);
            StopMotor();
            TurnServo(waterArmServo, WATER_ARM_TASK_ANGLE, WATER_ARM_INIT_ANGLE, 40);
            Master.write(74);
        }
    }
}