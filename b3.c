/* write a structure of emp and sort data on emp salary
 and display using bubble sort*/
#include<stdio.h>
int main()
{    struct emp
	{
		int eno;
		char ename[20];
		int sal;
	}e1[100],t;
	int i,n,pass;
	printf("enter limit:");
	scanf("%d",&n);
	printf("\n enter n emp info:");
	 for(i=0;i<n;i++)
	 {  
	    printf("\n enter emp no name salary");
	 	scanf("%d%s%d",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	 }
	 for(pass=1;pass<n;pass++)
	   {
	   	 for(i=0;i<n-pass;i++)
	   	 {
		  if(e1[i].sal>e1[i+1].sal)
	   	  {
	   	     t=e1[i];
			 e1[i]=e1[i+1];
			 e1[i+1]=t;	
	      }
	    }
	   }
	   printf("\n display emp info:");
	    for(i=0;i<n;i++)
	     {
	     	printf("\n %d\t%s\t%d",e1[i].eno,e1[i].ename,e1[i].sal);
		 }
}
