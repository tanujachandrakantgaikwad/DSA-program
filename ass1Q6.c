#include<stdio.h>
int main()
{
	int a[10],i,n,p,c;
    clrscr();
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	 for(i=0;i<n;i++)
      {
        printf("\n enter p&c values");
	  	scanf("%d%d",&p,&c);
	  	 a[p]=c;
	  }
	  printf("\n polynomial is:");
	   for(i=n-1;i>0;i--)
	    {
	    	if(i==0)
	    	 {
	    	 	printf("%d",a[i]);
			 }
			else
			{
				printf("%d*^%d+",a[i],i);
			}
		}
		getch();
}
