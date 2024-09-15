#include<stdio.h>
int main()
{
 struct stud
 {
  int rno;
  clrscr();
  char name[20];
  int per;
 }s1[100];
 int i,n,num;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter roll no name per");
 for(i=0;i<n;i++)
  {
  scanf("%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].per);
  }
  printf("enter roll no to serch");
  scanf("%d",&rnum);
  for(i=0;i<n;i++)
  {
   if(s1[i].rno==rnum)
   {
   break;
   }
   if(i==n)
   printf("number is not found");
   else
  printf("number is found");
  getch();
  return0;
 }