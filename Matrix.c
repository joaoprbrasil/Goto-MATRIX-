#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(){
system("color A");
keybd_event(VK_MENU  , 0x36, 0, 0);
keybd_event(VK_RETURN, 0x1C, 0, 0);
keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
keybd_event(VK_MENU  , 0x38, KEYEVENTF_KEYUP, 0);

    for(int i=1; i>0; i+=10){
        printf(" %d", i);
    }
}
