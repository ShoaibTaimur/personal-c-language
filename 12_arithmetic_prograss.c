#include <stdio.h>

int main(){

    int a=5,d=3;

    for (int i = 1; i <=20; i++)
    {
        int c=a+((i-1)*d);

        printf("%d ",c);
    }
    
return 0;
}