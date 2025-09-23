#include <stdio.h>

int main()
{

    char str[100];

    printf("Enter String->");
    fgets(str, sizeof(str), stdin);
    fflush(stdin);

    int length = 0, j = 0;
    while (str[length] != '\n')
    {
        length++;
    }

    printf("%d\n", length);

    int count = 1;

    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - 1])
        {
            count = -1;
            break;
        }
        length--;
    }

    if (count == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a plaindrome");
    }

    return 0;
}