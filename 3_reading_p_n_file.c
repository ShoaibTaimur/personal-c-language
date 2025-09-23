#include <stdio.h>

int main(){

    FILE *file;

    int x,sumN=0,sumP=0;

    file=fopen("numbers.txt","r");


    while (fscanf(file,"%d",&x)==1) // used 1 bcz EOF value in c is -1, which will be a problem
    {
        if(x>0)
        {
            sumP+=x;
        }
        else
        {
            sumN+=x;
        }
    }

    fclose(file);


    printf("Result is %d for positive and %d for negative",sumP,sumN);
    
return 0;
}