/*accpct a structure  and accept emp name to search and display useing binary search*/
#include<stdio.h>
int main()
{
	struct emp
	{
		char name[20];
		char qua[20];
		long int sal;
	}e1[100],ename;
	int i,n,top,bottom,mid,f=0;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter n emp info:");
	 for(i=0;i<n;i++)
	 {  printf("\n enter emp name qua sal:");
	 	scanf("%s%s%ld",&e1[i].name,&e1[i].qua,&e1[i].sal);
	 }
	 printf("\n enter emp name to search:");
	 scanf("%s",&ename);
	 top=0;
	 bottom=n-1;
	 while(top<=bottom)
	  {
	  	mid=(top+bottom)/2;
	  	if(strcmp(e1[mid].name,ename)==0)
	  	  {
	  	  	 printf("city found");
	  	  	
	  	  	f=1;
	  	  	break;
			}
	     if(strcmp(ename,e1[i].name)>0)
		   top=mid+1;
		  else
		   bottom=mid-1;
	 }
	 if(f==0)
	  printf("city not found");
	  
}
