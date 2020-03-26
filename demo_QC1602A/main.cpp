#include <iostream>
using namespace std;
#include "LCD.h"
char ch(int x){
    return x;
}
int main(){
    char hello[7]={'1','0','7','0','3','3','1'};
    LCD_initialize();
    locate(0,5);
    for(int i=0;i<7;i++){
        display(hello[i]);
    }
    locate(1,7);
    display('3');
    display('0');
    wait(1);
    for(int i=2;i>=0;i--){
        locate(1,7);
        display((char)(i+48));
        for(int j=9;j>=0;j--){
            locate(1,8);
            display((char)(j+48));
            wait(1);
        }
    }
    return 0;
}