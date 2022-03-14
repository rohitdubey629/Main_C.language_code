#include<stdio.h>
#include<conio.h>

//no arg and no return
 /*
void fact();
void main(){
 clrscr();
 fact();
 getch();
}
void fact(){
 int num , i , f = 1;
 printf("Enter the number");
 scanf("%d",&num);
 for(i=1;i<=num;i++){
  f=f*i;
 }
 printf("factorial is =%d",f);
}
*/

//no arg and yes return
/*
int fact();
void main(){
int f;
 clrscr();
f =  fact();
printf("factorial is %d",f);
getch();
}
int fact(){
 int num , i , f=1;
 printf("Enter te number");
 scanf("%d",&num);
 for(i=1;i<=num;i++){
  f = f * i;
 }
 return f;
}
*/
  void fact(int);
  void main(){
   int num;
   clrscr();
   printf("Enter the number");
   scanf("%d",&num);
   fact(num);
   getch();
  }
   void fact(int num){
    int i , f = 1;
    for(i=1;i<=num;i++){
     f = f * i;
    }
    printf("factorial is %d",f);
   }
//yes arg and yes return
/*
int fact(int);
void main(){
 int num , t;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
t =  fact(num);
printf("factorial is %d",t);
getch();
}
int fact(int num){
 int i , f = 1;
 for(i=1;i<=num;i++){
  f = f * i;
 }
 return f;
}
*/