#include <stdio.h>

int main()
{
    int i, speed;

    for(i = 1; i <= 5; i++)
    {
        printf("Enter motor speed: ");
        scanf("%d", &speed);

        if(speed >= 50 && speed <= 100)
        {
            printf("Normal Speed\n");
        }
        else
        {
            printf("Speed Out of Range\n");
        }
    }

    return 0;
}
