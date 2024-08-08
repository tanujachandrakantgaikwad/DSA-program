#include<stdio.h>
#include<stdlib.h>
int main()
{
  struct emp
  {
  	 int eno;
  	 char ename[20];
  	  int age;
  }e1[100],t;
   int i,n,pass;
  FILE *f1;
   f1=fopen("emp.txt","r");
    if(f1==NULL)
     {
     	printf("file not found");
     	 exit(0);
	 }
	 i=0;
	  while(!feof(f1))
     {
     	fscanf(f1,"%d%s%d",&e1[i].eno,&e1[i].ename,&e1[i].age);
     	i++;
	 }
	 n=i;
	 printf("\n before sort emp info \n");
	  for(i=0;i<n;i++)
	  {
	     printf("\n %d\t%s\t%d\t",e1[i].eno,e1[i].ename,e1[i].age);
      }
     for(pass=1;pass<n;pass++)
  {
    for(i=0;i<n-pass;i++)
   {
     if(e1[i].age>e1[i+1].age)
     {
       t=e1[i];
       e1[i]=e1[i+1];
       e1[i+1]=t;
     }
  }
 }
 printf("\n emp info\n");
   for(i=0;i<n;i++)
   printf("\n%d\t%s\t%d\t",e1[i].eno,e1[i].ename,e1[i].age);
}
