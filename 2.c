#include <stdio.h>
#include <math.h>

int main()
{

    for (int j = 1; j <= 500; j++)
    {
        int actual=j;
        

        int test = actual, temp = actual;

        int count = 0;

        while (test != 0)
        {
            test = test / 10;
            count++;
        }

        int arr[count], i = 0;

        while (temp != 0)
        {
            arr[i] = temp % 10;
            temp = temp / 10;
            i++;
        }

        int total = 0;

        for (int i = 0; i < count; i++)
        {
            total = total + (int)pow(arr[i], count);
        }

        if (total == actual)
        {
            printf("%d ",actual);
        }
        
    }

    return 0;
}