/* read data from"student.txt"file and sort the data 
on age in ascending order using bubble sort*/
#include<stdio.h>
int main()
{
	 int i,n,pass;
	struct student
	 {
	 	int rno;
	 	char name[20];
	 	int age;
	 }s1[100],t;
 FILE *f1;
 f1=fopen("student.txt","r");
  if(f1==NULL)
  {
  	printf("file not found");
  	exit(0);
  }
  i=0;
  while(!feof(f1))
  {
  	fscanf(f1,"%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].age);
  	 i++;
  }
  n=i-1;
  for(pass=1;pass<n;pass++)
	   {
	   	 for(i=0;i<n-pass;i++)
	   	  {
			 if(s1[i].age>s1[i+1].age)
	   	   {
	   	     t=s1[i];
			 s1[i]=s1[i+1];
			 s1[i+1]=t;	
	       }
	     }
       }
       printf("display info of student:");
         for(i=0;i<n;i++)
         	printf("\n %d\t%s\t%d",s1[i].rno,s1[i].name,s1[i].age);
		 
}

