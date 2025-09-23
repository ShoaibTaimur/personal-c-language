#include <stdio.h>

int main(){

    int x=0,m,n;

    printf("Enter size of 2 arrays->");
    scanf("%d %d",&m,&n);

    int arr1[m], arr2[n], arr[m+n];


    printf("Enter inputs for first array->");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter inputs for second array->");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }

    
    for (int i = 0; i < m; i++)
    {
        arr[x]=arr1[i];
        x++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[x]=arr2[i];
        x++;
    }

    printf("Merged array of array 1 and 2 is->");

    for (int i = 0; i < x; i++)
    {
        printf("%d",arr[i]);
    }
    
    

return 0;
}