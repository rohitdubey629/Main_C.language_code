/*
#include<stdio.h>
#include<conio.h>
#define PI 3.14


void main(){

 float a;
 int r;
 clrscr();
 printf("Enter the number");
 scanf("%d",&r);
 a = PI * r * r;
 printf("area %f",a);
 getch();
}
*/

//print table use macro methord
/*
  #include<stdio.h>
  #include<conio.h>
  #define table(x , y)(x * y)


  void main(){
   int n , i ;
   clrscr();
   printf("Enter any number");
   scanf("%d",&n);
   for(i=1;i<=10;i++)   {
   printf("%d * %d = %d\n", n , i , table(n,i));
   }
   getch();
  }
*/
//  find pi use by macro
/*
  #include<stdio.h>
  #include<conio.h>
  #define PI(x)(3.14 * x * x)

  void main(){
   int r;
   clrscr();
   printf("Enter the number");
   scanf("%d",&r);
   printf("area = %f",PI(r));
   getch();
  }  */
//  sum of two digit use macro
 #include<stdio.h>
 #include<conio.h>
 #define sum(x , y)(x + y)

 void main(){
  int a , b , c;
  clrscr();
  printf("Enter two number");
  scanf("%d%d",&a,&b);

  printf("sum of is = %d",sum(a , b));
  getch();
 }