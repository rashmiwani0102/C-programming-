#include <stdio.h>
#include <conio.h>

void main()
{
    int battery;
    clrscr();

    for(battery=100; battery>=0; battery-=20)
        printf("Battery = %d%%\n", battery);

    getch();
}
