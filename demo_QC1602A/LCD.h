#ifndef LCD_H
#define LCD_H
#include "mbed.h"
bool LCD_initialize();
bool display(char value);
bool locate(int row,int col);
#endif