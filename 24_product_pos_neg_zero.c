#include <stdio.h>

int main()
{

    int a, b, c, product;

    printf("Enter 3 integers->");
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0)
    {
        printf("Zero");
    }
    else
    {
        product = a * b * c;

        printf(product>0 ? "Positive":"Negative");
    }

    return 0;
}