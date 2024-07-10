#include<stdio.h>
int main()
{
 int a[100],i,n,t,pass,max,index;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n number");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(pass=1;pass<n;pass++)
    {
      max=a[pass];
     index=pass;
     for(i=pass+1;i<n;i++)
       {
	if(a[i]>max)
	 {
	   max=a[i];
	   index=i;
	  }
	}
	t=a[i];
	a[i]=max;
	max=t;
      }
    printf("\n sort no=");
     for(i=0;i<n;i++)
     printf("%d \t",a[i]);






















}

