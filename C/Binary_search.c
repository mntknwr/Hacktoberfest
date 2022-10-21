#include<stdio.h>
#define SIZE 10
 
int main()
{
    int i,x,pos,a[SIZE],low,high,mid;
    printf("Enter the elements of the matrix\n");
    for(i=0;i<SIZE;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched\n");
        scanf("%d",&x);   
    low=0; high=SIZE-1;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(a[mid] == x)
        {
            pos=mid+1;
        }
        if(x>a[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid -1;
        }
    }
    if(pos==-1)
        printf("Element not found");
    else
        printf("Element found at %d position",pos);
    return 0;
}
