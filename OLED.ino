
void initializeOLED ()
{
     if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
    { // Address 0x3C for 128x32
        for (;;)
            ; // Don't proceed, loop forever
    }
    display.display();
    delay(2000); // Pause for 2 seconds
    display.clearDisplay();
    display.drawPixel(10, 10, WHITE);
    display.display();
    delay(10000); // time before showing anything in the display
}



void Detect_Colour_OLED_Display()
{
    uint16_t r, g, b, c, colorTemp, lux;
    int red = 0;
    int green = 0;
    int blue = 0;
    int count = 0;

    tcs.getRawData( &r, &g, &b, &c);
    
    for (count = 1; count <= 5; count++)
    {
        red = r + red;
        green = g + green;
        blue = b + blue;
    }

    red = red / 5;
    green = green / 5;
    blue = blue / 5;

    if (red > green && red > blue)
    {
        Colour = "RED";
    }
    if (green > red && green > blue)
    {
        Colour = "GREEN";
    }
    if (blue > green && blue > red)
    {
        Colour = "BLUE";
    }

    testscrolltext();

}



void testscrolltext()
{
    display.clearDisplay();

    display.setTextSize(2); // Draw 2X-scale text
    display.setTextColor(WHITE);
    display.setCursor(2, 2);
    display.println(Colour);  
    display.display(); // Show initial text
    delay(100);
}
