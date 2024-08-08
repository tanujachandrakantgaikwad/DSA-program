/*accpct n city name in array an accpct name of city to search   and display useing binary search*/
#include<stdio.h>
int main()
{
	char c1[20][20],s1[20];
	int i,n,top,bottom,mid,f=0;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n city name:");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%s",&c1[i]);
	 }
	 printf("enter city name to search:");
	 scanf("%s",&s1);
	 top=0;
	 bottom=n-1;
	 while(top<=bottom)
	  {
	  	mid=(top+bottom)/2;
	  	if(strcmp(c1[mid],s1)==0)
	  	  {
	  	  	f=1;
	  	  	break;
			}
	     if(strcmp(s1,c1[mid])>0)
		   top=mid+1;
		  else
		   bottom=mid-1;
	 }
	 if(f==1)
	  printf("city name found");
	else
	  printf("city name not found");
	  
}
