void show(int[]);
void main(){
 int a[3],i;
 clrscr();
 printf("Enter the number");
 for(i=0;i<=2;i++)
 {
  scanf("%d",a[i]);
 }
 show(a);
 for(i=0;i<=2;i++)
 {
  printf("%d\n",a[i]);
 }
 getch();
}
void show(int x[])
{
 int i;
 for(i=0;i<=2;i++)
 {
  x[i]=x[i]+100;
 }
}
