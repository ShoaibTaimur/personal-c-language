#include <stdio.h>

int main(){

    int n;
    printf("Enter array size->");
    scanf("%d",&n);
    int arr[n];

    printf("Enter values->");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=n-1;

    for (int i = 0; i <= n/2; i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
return 0;
}