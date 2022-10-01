#include<stdio.h>
int main()
{
int n,m,i,j,temp,a[100],b[100];
 printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter %d numbers into the array\n",n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         printf("a[%d]=%d\n",i,a[i]);
    }
    for(i=1;i<n;i++)
      {
          for(j=0;j<n-i;j++)
           {
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
          }
      }
        
return 0;
}