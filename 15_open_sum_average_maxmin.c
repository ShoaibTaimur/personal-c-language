#include <stdio.h>

int main()
{

    FILE *file;

    file = fopen("numbers.txt", "r");

    double sum = 0, min = 100000, max = -min, average, n;
    int count = 0;

    while (fscanf(file, "%lf", &n) == 1)
    {
        count++;

        sum = sum + n;

        if (min > n)
        {
            min = n;
        }

        else if (max < n)
        {
            max = n;
        }
    }

    printf("Max-> %lf\n", max);
    printf("Min-> %lf\n", min);
    printf("Sum-> %lf\n", sum);
    printf("Average-> %.2lf\n", sum / count);
    printf("Count-> %d\n", count);

    return 0;
}