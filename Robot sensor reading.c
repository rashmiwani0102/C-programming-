#include <stdio.h>
#include <conio.h>

void main()
{
    int i, sensor;
    clrscr();

    for(i=1; i<=5; i++)
    {
        printf("Enter sensor reading %d: ", i);
        scanf("%d", &sensor);
        printf("Reading = %d\n", sensor);
    }

    getch();
}
