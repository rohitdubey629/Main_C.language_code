#include<stdio.h>
#include<conio.h>
void main(){
 int n1,n2,i,j,sum=0,re;
 clrscr();
 printf("Enter the first numbur");
 scanf("%d",&n1);
 printf("Enter the last number");
 scanf("%d",&n2);
 for(i=n1;i<=n2;i++)
 {
   sum=0;
//   printf("%d\n",i);
   for(j=i;j>0;)
  {
       re=j%10;
       sum=sum+re;
       j=j/10;
  }
  printf("%d\n",sum);
 }
 getch();
}