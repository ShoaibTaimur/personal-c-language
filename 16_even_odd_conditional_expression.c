#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter 2 integer number->");
    scanf("%d %d", &a, &b);

    int c = a + b;

    printf((c % 2 == 0) ? "Even\n" : "odd\n");
    return 0;
}