#include<stdio.h>
#include<conio.h>
struct student{
 int roll,sr;
 char name[500];
};
 void main(){

struct student obj[50];
 int i , sr;
 clrscr();
 printf("Enter the array size");
 scanf("%d",&sr);
 sr-=1;
 for(i=0;i<=sr;i++)
 {
  clrscr();
  printf("Enter %d Record :\n",i+1);
  scanf("%d",&obj[i].sr);
  printf("Enter the s.r.n :");
  scanf("%d",&obj[i].roll);
  fflush(stdin);
  printf("Enter the name :");
  gets(obj[i].name);
  clrscr();
 }
 for(i=0;i<=sr;i++)
 {
   printf("%d\t%d\t%s\n",obj[i].sr,obj[i].roll,obj[i].name);
 }
 printf("s.r.n\troll n\tname");
 getch();
}