#include <stdio.h>
#include <string.h>

int main()
{

    FILE *file;

    file = fopen("numbers.txt", "r");

    int max = -1, mark, sum = 0, count = 0;
    char name[100], topname[100];

    while (fscanf(file, "%s %d", name, &mark) == 2)
    {
        if (mark > max)
        {
            max = mark;
            strcpy(topname, name);
        }

        sum += mark;
        count++;
    }

    float average = (float)sum / (float)count;

    printf("Highest mark obtained by %s is %d\n And average of mark is %.3f", topname, max, average);
    fclose(file);

    return 0;
}