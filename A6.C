#include<stdio.h>
int main()
{
 int a[100],i,n;
   void disp(int a[100],int n);
  clrscr();
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n number");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   disp(a,n);
   getch();
   }
   void disp(int a[100],int n)
   {
    int i,pass,t,min,index;
   for(pass=0;pass<n;pass++)
    {
      min=a[pass];
     index=pass;
     for(i=pass+1;i<n;i++)
       {
	if(a[i]<min)
	 {
	   min=a[i];
	   index=i;
	  }
	}
	t=a[pass];
	a[pass]=min;
	a[index]=t;
      }
    printf("\n sort no=");
     for(i=0;i<n;i++)
     printf("%d \t",a[i]);
  }























