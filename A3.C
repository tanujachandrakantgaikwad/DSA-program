#include<stdio.h>
int main()
{
 int a[100],i,n,t,pass;
  clrscr();
 printf("enter linit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    a[i]=rand()%100;
  }
 printf("enter n number ");
  for(i=0;i<n;i++)
  printf("%d \t",a[i]);
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

    printf("\n sort no=");
     for(i=0;i<n;i++)
     printf("%d \t",a[i]);
   getch();
  }