//Linear Search
#include<stdio.h>
int main()
{
    int arr[100],n,search,i,e=0;
    printf("enter the number of element ");
    scanf("%d",&n);
    printf("%d",n);
    printf("Enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("position of %d element of %d=\n",i,arr[i]);
    }
    
    printf("Enter element you want to search ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search == arr[i])
        {
            printf("Element search %dnd index ",i);
            e=1;
        }
    }
    if(e==0)
    {
        printf("Element not found in the array");
    }
    return 0;
}
