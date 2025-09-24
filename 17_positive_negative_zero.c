#include <stdio.h>

int main()
{

    int n;

    printf("Enter array size->");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }

        else if (arr[i] < 0)
        {
            negative++;
        }

        else
        {
            zero++;
        }
    }

    printf("Positive-> %d\nNegative-%d\nZero->%d\n", positive, negative, zero);

    return 0;
}