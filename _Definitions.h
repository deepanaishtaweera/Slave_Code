#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_TCS34725.h>
#include <Servo.h>

#define WATER_SERVO_ARM 9
#define COIN_SERVO_ARM 6
#define MAGNET_SERVO 7 
#define DOOR_SERVO 8
#define MOTOR_1A 3
#define MOTOR_1B 2
#define BUTTON_LEFT 
#define BUTTON_RIGHT 

#define DOOR_CLOSED_ANGLE 150
#define DOOR_OPEN_ANGLE 100
#define COIN_ARM_INIT_ANGLE 170
#define COIN_ARM_TASK_ANGLE 50
#define WATER_ARM_INIT_ANGLE 20
#define WATER_ARM_TASK_ANGLE 100
#define MAGNET_INIT_ANGLE 95
#define MAGNET_TASK_ANGLE 10

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels
#define OLED_RESET -1
#define NUMFLAKES 10
#define LOGO_HEIGHT 16
#define LOGO_WIDTH 16
