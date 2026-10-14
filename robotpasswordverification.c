
#include <stdio.h>

int main()
{
    int i, code;
    int correctCode = 1234;
    
    for (i = 1; i <= 3; i++)
    {
        printf("Enter robot access code: ");
        scanf("%d", &code);

        if (code == correctCode)
        {
            printf("Access Granted!\n");
            break;
        }
        else
        {
            printf("Incorrect Code!\n");
        }
    }

    return 0;
}
