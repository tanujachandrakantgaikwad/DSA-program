#include<stdio.h>
int main()
{
	int a[10],a2[10],i,n;
    clrscr();
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	 for(i=0;i<n;i++)
      {
      	scanf("%d",&a[i]);
	  }
	  printf("array of element");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d\t",a[i]);
	  }
	  printf("\n copy array element ");
	  for(i=0;i<n;i++)
	  {
	     a2[i]=a[i];
	  }
	  printf("\n second array");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d\t",a2[i]);
	  }
	  getch();
}
