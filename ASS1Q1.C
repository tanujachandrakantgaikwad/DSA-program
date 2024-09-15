#include<stdio.h>
int main()
{
	int a[10],i,n,s=0,ch;
     clrscr();
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n number");
	 for(i=0;i<n;i++)
      {
      	scanf("%d",&a[i]);
	  }
	  printf("\n 1:even number position sum");
	  printf("\n 2:odd number position sum");
      printf("\n enter choice");
      scanf("%d",&ch);
      switch(ch)
      {
      	case 1:for(i=0;i<n;i++)
               
               	if(i%2==0)
               	  {
               	  	s=s+a[i];
			      }
			   printf("even no=%d",s);
			    break;
		case 2:for(i=0;i<n;i++)
               
               	if(i%2==1)
               	  {
               	  	s=s+a[i];
			      }
			   printf("odd no=%d",s);
	  }
getch();
}
