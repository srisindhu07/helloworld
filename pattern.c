#include<stdio.h>
int main()
{
    int i,a[1000],n;
    printf("enter the n value\n");
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("the elements in the array are");
      for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}