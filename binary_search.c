#include<stdio.h>
void main()
{
    int a[100],n,i,count=0,low,mid,upr,num;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the %d numbers in array in sorted form\n",n);
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&a[i]);
      printf("a[%d]=%d\n",i,a[i]);
    }
    //binary search
    printf("enter the number to be searched\n");
    scanf("%d",&num);
    low=0;upr=n-1;
    while (low<=upr)
    {
      mid=(low+upr)/2;
      if (num==a[mid])
      {
        count++;
        break;
      }
      else if (num<a[mid])
      {
        upr=mid-1;
      }
      else
      low=mid+1;
      
    }
    if(count==0)
    printf("number not found\n");
    else
        printf("the number is found at index no.%d\n",mid);
    
}