/*accpct n  random number in array and display useing bubble sort*/
#include<stdio.h>
int main()
{
	int a[100],i,n,t,pass;
	printf("enter limit:");
	scanf("%d",&n);
	 for(i=0;i<n;i++)
	  {
	  	a[i]=rand()%100;
	  }
     printf("\n random number:");
	 for(i=0;i<n;i++)
	 { 
	 	printf("%d\t",a[i]);
	 }
	 for(pass=1;pass<n;pass++)
	   {
	   	 for(i=0;i<n-pass;i++)
	   	  if(a[i]>a[i+1])
	   	  {
	   	     t=a[i];
			 a[i]=a[i+1];
			 a[i+1]=t;	
	      }
	   }
	   printf("\n display number:");
	    for(i=0;i<n;i++)
	     {
	     	printf("%d\t",a[i]);
		 }
}
