#include<stdio.h>
int main()
{
	int a[100],i,n,num,top,bottom,mid,c1=0,f=0;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter stord number to search");
	scanf("%d",&num);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		 c1=c1+1;
		mid=(top+bottom)/2;
		if(a[mid]==num)
		 {
		 	f-1;
		 	break;
		 }
		 else if(num>a[mid])
		  top=mid+1;
		  else
		   bottom=mid-1;
	}
	printf("\n number count=%d",c1);
	if(f==1)
	 printf(" \n number found");
	else
     printf("number not found");
}
