#include <stdio.h>

int main()
{

    int x, num;

    printf("How many times you want to run the test->");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        int count = 0;
        printf("Enter Number->");
        scanf("%d", &num);

        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                count++;
            }
        }

        if (num == 1 || num <= 0)
        {
            printf("Enter any number other than 1 ,negative integer or 0\n");
        }

        else if (count == 2)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not a prime\n");
        }
    }

    return 0;
}