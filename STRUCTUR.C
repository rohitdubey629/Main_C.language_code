#include<conio.h>
#include<stdio.h>
struct student
{
 int roll;
char a[500];
};
void main(){
 struct student st;
 clrscr();
 printf("Enter the roll number");
 scanf("%d",&st.roll);
 fflush(stdin);
 printf("Enter the name");
 gets(st.a);
 printf("Roll no : %d\n",st.roll);
 printf("NAme is : %s",st.a);
 getch();
}