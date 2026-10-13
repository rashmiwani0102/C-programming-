#include <stdio.h>

int main()
{
    int i, distance;

    for(i = 1; i <= 5; i++)
    {
        printf("Enter distance in cm: ");
        scanf("%d", &distance);

        if(distance < 20)
        {
            printf("Obstacle Detected\n");
        }
        else
        {
            printf("Path Clear\n");
        }
    }

    return 0;
}
