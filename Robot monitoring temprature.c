#include <stdio.h>
#include <conio.h>

void main()
{
    int i, temp;
    clrscr();

    for(i=1; i<=5; i++)
    {
        printf("Enter temperature %d: ", i);
        scanf("%d", &temp);
        printf("Temperature = %d C\n", temp);
    }

    getch();
}
