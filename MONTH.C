void main(){
int d,m;
clrscr();
printf("Enter the no. of days");
scanf("%d",&d);
m=d/30;
d=d%30;
printf("Total no. of month =%d\n",m);
printf("Total remaining days =%d",d);
getch();
}