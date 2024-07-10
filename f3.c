#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *f1;
 int code,f=0,top,bottom,mid;
 char name[20],s1[20];
 f1=fopen("city.txt","r");
 if(f1==NULL)
 {
   printf("file not found");
   exit(0);
 }
 printf("enter city name to search=");
 scanf("%s",&s1);
while(!feof(f1))

 {
    
   fscanf(f1,"%s\n%d\n",&name,&code);
   if(strcmp(name,s1)==0)
   {
   	f=1;
   	break;
   }
 
 }
   if(f==1)
    printf("std code=%d",code);
   else
    printf("file not found");
 
fclose(f1);

}
