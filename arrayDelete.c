#include<stdio.h>
int main()
{
    int n,arr[n],i,pos;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    printf("Enter elements of the array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter position of the element to be deleted\n");
    scanf("%d",&pos);

    for(i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }

    printf("Elements after deletion\n");

    for(i=0;i<n-1;i++)
    {
        printf("%d\n",arr[i]);
    }
}
