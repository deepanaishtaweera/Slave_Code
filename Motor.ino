void InitializeMotor(){
    pinMode(MOTOR_1A,OUTPUT);
    pinMode(MOTOR_1B,OUTPUT);
    digitalWrite(MOTOR_1A,LOW);
    digitalWrite(MOTOR_1B,LOW);
}

void TakeWaterIn(){
    digitalWrite(MOTOR_1A, LOW);
    digitalWrite(MOTOR_1B, HIGH);
}

void TakeWaterOut() {
    digitalWrite(MOTOR_1A, HIGH);
    digitalWrite(MOTOR_1B, LOW);
}

void StopMotor(){
    digitalWrite(MOTOR_1A, LOW);
    digitalWrite(MOTOR_1B, LOW);
}