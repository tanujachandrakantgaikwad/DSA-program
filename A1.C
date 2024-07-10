#include<stdio.h>
int main()
{
 int a[100],i,n,t,pass;
  clrscr();
 printf("enter linit");
 scanf("%d",&n);
 printf("enter n number ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(pass=1;pass<n;pass++)
   {
    for(i=0;i<n-pass;i++)
     {
       if(a[i]>a[i+1])
	{
	 t=a[i];
	 a[i]=a[i+1];
	 a[i+1]=t;
	 }
      }
    }
    printf("sort no=");
     for(i=0;i<n;i++)
     printf("%d",a[i]);
   getch();
  }