#include <stdio.h>

int main(){

    FILE *file;

    file=fopen("output.txt","w");

    for (int i = 1; i <= 10; i++)
    {
        fprintf(file,"%d ",i);
    }
    
    fclose(file);

    int sum=0,n;

    file=fopen("output.txt","r");

    while(fscanf(file,"%d",&n)!=EOF)
    {
        sum+=n;
    }


    printf("Sum is %d",sum);
return 0;
}