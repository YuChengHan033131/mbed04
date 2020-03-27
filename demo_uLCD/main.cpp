#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL scr(D1, D0, D2);

int main()
{
      scr.background_color(WHITE);
      scr.textbackground_color(WHITE);
      scr.color(BLUE);
      scr.cls();
      scr.text_width(2);
      scr.text_height(2);
      scr.printf("107033131");
      scr.color(GREEN);
      scr.text_width(5);
      scr.text_height(5);
      for(int i=30;i>=0;i--){
            scr.locate(1,2);
            scr.printf("%.2D",i);
            wait(1);
      }
}