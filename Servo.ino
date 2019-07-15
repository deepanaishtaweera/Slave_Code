void TurnServo(Servo &theServo, int startAngle, int stopAngle, int delayTime) {
    if (startAngle < stopAngle) {
        for (int i = startAngle; i < stopAngle; i++) {
            theServo.write(i);
            delay(delayTime);
        }
    } else if (startAngle > stopAngle) {
        for (int i = startAngle; i > stopAngle; i--) {
            theServo.write(i);
            delay(delayTime);
        }
    }
}

void TurnWaterArm() {
    TurnServo(waterArmServo, WATER_ARM_INIT_ANGLE, WATER_ARM_TASK_ANGLE, 40);
    TurnServo(waterArmServo, WATER_ARM_TASK_ANGLE, WATER_ARM_INIT_ANGLE, 40);
}

void TurnCoinArm(){
    TurnServo(coinArmServo, COIN_ARM_INIT_ANGLE, COIN_ARM_TASK_ANGLE, 5);
    TurnServo(coinArmServo, COIN_ARM_TASK_ANGLE, COIN_DROP_ANGLE, 10);
    
}
void TurnMagnet(){
    magnetServo.write(40);
    TurnServo(coinArmServo, COIN_DROP_ANGLE, COIN_INTERMEDIATE_ANGLE, 20);
    TurnServo(coinArmServo, COIN_INTERMEDIATE_ANGLE, COIN_ARM_INIT_ANGLE, 20);
    delay(500);
    magnetServo.write(MAGNET_INIT_ANGLE);
}

void CloseCoinDoor(){
    doorServo.write(DOOR_CLOSED_ANGLE);
}

void OpenCoinDoor(){
    doorServo.write(DOOR_OPEN_ANGLE);
}

void InitializeServo() {
    waterArmServo.attach(WATER_SERVO_ARM);
    coinArmServo.attach(COIN_SERVO_ARM);
    magnetServo.attach(MAGNET_SERVO);
    doorServo.attach(DOOR_SERVO);

    waterArmServo.write(WATER_ARM_INIT_ANGLE);
    coinArmServo.write(COIN_ARM_INIT_ANGLE);
    magnetServo.write(MAGNET_INIT_ANGLE);
    doorServo.write(DOOR_CLOSED_ANGLE);
}

void DropCoin(){
    OpenCoinDoor();
    delay(5000);
    CloseCoinDoor();
}