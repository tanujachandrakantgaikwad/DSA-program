#include<stdio.h>
int main()
{
	int a[10],c=0,i,n,num;
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
	 	if(a[i]==num)
	 	{
	 		c++;
		 }
	 }
	 printf("\n count of number=%d",c);
getch();
}
