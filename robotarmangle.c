
#include <stdio.h>

int main()
{
    int i, angle;

    for (i = 1; i <= 6; i++)
    {
        printf("Enter arm angle: ");
        scanf("%d", &angle);

        if (angle >= 0 && angle <= 180)
            printf("Valid Angle\n");
        else
            printf("Invalid Angle\n");
    }

    return 0;
}
