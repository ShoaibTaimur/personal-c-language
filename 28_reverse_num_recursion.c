#include <stdio.h>

void reverse(int num)
{
    if (num == 0)
        return;
        
    printf("%d", num % 10); 
    reverse(num / 10);      
}

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Reversed number: ");
    reverse(number);
    printf("\n");

    return 0;
}
