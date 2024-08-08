#include<stdio.h>
#include<stdlib.h>
int main()
{
  struct stud
  {
  	 int rno;
  	 char name[20];
  	float p;
  }s1[100],t;
   int i,n,pass;
  FILE *f1;
   f1=fopen("stud.txt","r");
    if(f1==NULL)
     {
     	printf("file not found");
     	 exit(0);
	 }
	 i=0;
	  while(!feof(f1))
     {
     	fscanf(f1,"%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].p);
     	i++;
	 }
	 n=i;
	 printf("\n before sort student info \n");
	  for(i=0;i<n;i++)
	  {
	     printf("\n %d\t%s\t%f\t",s1[i].rno,s1[i].name,s1[i].p);
      }
     for(pass=1;pass<n;pass++)
  {
    for(i=0;i<n-pass;i++)
   {
     if(s1[i].p>s1[i+1].p)
     {
       t=s1[i];
       s1[i]=s1[i+1];
       s1[i+1]=t;
     }
  }
 }
 printf("\n student info\n");
   for(i=0;i<n;i++)
   printf("\n%d\t%s\t%f\t",s1[i].rno,s1[i].name,s1[i].p);
}
