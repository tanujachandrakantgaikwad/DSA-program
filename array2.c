#include<stdio.h>
int main()
{
	int s[10][10],i,n;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n string:");
	 for(i=0;i<n;i++)
	  {
	  	scanf("%s",&s[i]);
	  }
	printf("display char:");
	 for(i=0;i<n;i++)
	 printf("\n %s",s[i]);
}
