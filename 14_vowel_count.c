#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char str[100];
    int vcount = 0;

    printf("Enter string->");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int count = strlen(str);

    for (int i = 0; i < count; i++)
    {
        char c = str[i];
        str[i] = tolower(c);
    }

    for (int i = 0; i < count; i++)
    {
        char c = str[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vcount++;
        }
    }

    printf("Vowels present at %s is %d", str, vcount);

    return 0;
}