#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    clrscr();

    for(i=1; i<=10; i++)
        printf("Robot moved forward: Step %d\n", i);

    getch();
}
