#include <stdio.h>

int main()
{

    int n, temp;

    printf("Enter array length ->");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers->", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest, smallest;


    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            int *p = &arr[j];

            if (*p > *(p + 1))
            {
                temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
        }
    }

    int *p=arr;
    largest = *(p+n-1);
    smallest = *p;

    printf("laregst is %d and smallest is %d", largest, smallest);

    return 0;
}