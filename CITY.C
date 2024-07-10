#include<stdio.h>
int main()
{
 char s1[20][20],cname[20];
 int n,i,f=0;
  clrscr();
 printf("enter limit");
 scanf("%d",&n);
   printf("enter city name");
    for(i=0;i<n;i++)
    scanf("%s",&s1[i]);
    printf("enter city name to search");
    scanf("%d",&name);
    for(i=0;i<n;i++)
     {
      if(strcmp(s1[i],name)==0)
	{
	 f=1;
	  break;
	}
     }
     if(f==0)
	printf("name not found");
     else
       printf("city name found %d",s1[i]);
     getch();
     return 0;
  }