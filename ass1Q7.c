#include<stdio.h>
int main()
{
	int a[10],i,n,x,y;
    clrscr();
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	 for(i=0;i<n;i++)
      {
      	scanf("%d",&a[i]);
	  }
	  printf("enter num to search");
	  scanf("%d",&x);
	  printf("enter num to replace");
	  scanf("%d",&y);
	  for(i=0;i<n;i++)
	   {
	   	if(a[i]==x)
	   	 a[i]=y;
	   }
	   printf("replace number");
	   for(i=0;i<n;i++)
	    {
	    	printf("%d\t",a[i]);
		}
	grtch();
}
