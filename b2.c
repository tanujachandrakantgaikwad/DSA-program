/*accpct n number in array and display useing binary search*/
#include<stdio.h>
int main()
{
	int a[100],i,n,top,bottom,mid;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n number:");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("enter number to search:");
	 scanf("%d",&num);
	 top=0;
	 bottom=n-1;
	 while(top<=bottom)
	  {
	  	mid=(top+bottom)/2;
	  	if(a[mid]==num)
	  	  {
	  	  	f=1;
	  	  	break;
			}
	     if(a[mid]>num)
		   top=mid+1;
		  else
		   bottom=mid-1;
	 }
	 if(f==1)
	  printf("number found");
	else
	  printf("number not found");
	  }
}
