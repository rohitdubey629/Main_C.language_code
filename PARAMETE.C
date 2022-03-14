#include<stdio.h>
#include<conio.h>

//parameter passing techniques (call by value and call by refrence)

//(call by value) use methord swap two numbr without using third variable
/*
void swap_cbvalue(int , int);
void main(){
int a , b ;
clrscr();
printf("Enter two number");
scanf("%d%d",&a , &b);
printf("\n a = %d\n b = %d",a,b);
swap_cbvalue(a , b);
getch();
}
void swap_cbvalue(int a , int b){
 a = a + b;
 b = a - b;
 a = a - b;
 printf("\nswap two number\n a = %d\n b = %d",a,b);
} */
//use methord (call by refrence) swap two number without using third variable


void swap_cbvalue(int* , int*);
void main(){
int a , b ;
clrscr();
printf("Enter two number");
scanf("%d%d",&a , &b);
printf("\n a = %d\n b = %d",a,b);
swap_cbvalue(&a , &b);
getch();
}
void swap_cbvalue(int *a , int *b){
 *a = *a + *b;
 *b = *a - *b;
 *a = *a - *b;
 printf("\nswap two number\n a = %d\n b = %d",*a,*b);
 }

