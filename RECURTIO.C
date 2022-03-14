#include<stdio.h>
#include<conio.h>

//find factoriale using recurtion methord

//yes argument and yes return
  /*
int fact_recrtion(int);
void main(){
 int num , f ;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
f = fact_recurtion(num);
 printf("Factorial is = %d",f);
 getch();
}
int fact_recurtion(int num){

 if(num==0)
 return 1;
 else
 return num * fact_recurtion(num - 1);
}
    */
//find using sum of a number using recurtion
//ex  inpur 5
//     5 + 4 + 3 + 2 + 1 = 15;
/*
 int sum_recrtion(int);
 void main(){
  int num , sum = 0 ;
  clrscr();
  printf("Enetr the number");
  scanf("%d",&num);
  sum = sum_recurtion(num);
  printf("sum of digit is = %d",sum);
  getch();
 }
  int sum_recurtion(int num){
   if(num==0)
   return 0;
   else
   return num + sum_recurtion(num-1);
  }
  */
//  creat table in recurtion

void table_recurtion(int , int);
void main(){
 int num , i = 10 , t;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
  table_recurtion(num , i);
// printf("%d",t);
 getch();
}
void table_recurtion(int num , int i){
   if(i>1)
   table_recurtion (num , i-1);
   printf("%d",num*i);
   }