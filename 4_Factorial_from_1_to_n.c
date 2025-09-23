#include <stdio.h>

int main(){

    int x;

    printf("Enter how many factorial number you want->");
    scanf("%d",&x);

    for (int i = 1; i <= x; i++)
    {
        int factorial=1;
        for (int j = 1; j <= i; j++)
        {
            factorial=factorial*j;
        }

        printf("%d ",factorial);
        
    }
    
return 0;
}