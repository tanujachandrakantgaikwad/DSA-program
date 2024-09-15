#include<stdio.h>
int main()
{
	int a[10],b[10],i,n;
    clrscr();
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	 for(i=0;i<n;i++)
      {
      	scanf("%d",&a[i]);
	  }
	  printf("array of square");
	  for(i=0;i<n;i++)
	  {
	  	b[i]=a[i]*a[i];
	  	printf("%d\t",b[i]);
	  }
	  printf("\n array element");
	   for(i=0;i<n;i++)
      {
        printf("%d\t",a[i]);
	  }
grtch();
}
