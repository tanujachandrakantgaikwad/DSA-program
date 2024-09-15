#include<stdio.h>
int main()
{
 int a[100],i,n,num,f=0;
 clrscr();
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n number");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter number to search");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {
  f=1;
  break;
  }
  if(f==1)
   printf("number is found");
   else
    printf("number is not found");
  getch();
  }