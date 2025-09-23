#include <stdio.h>

int main(){

    int result=0,count;

    for (int i = 1; i <= 50; i++)
    {
        count=0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }

        if(count==2)
        {
            result+=i;
        }
        
    }

    printf("Sum of all prime(1-50) is %d",result);
    
return 0;
}