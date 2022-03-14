void main(){
 int num,sum=0,r,rev;
 clrscr();
 printf("Enter the number");
 scanf("%d",&num);
 while(num>0){
       r=num%10;
       if(sum==0)
       {
       sum=sum+r;
       }
     num=num/10;
 }
  sum=sum+r;
     printf("%d",sum);
     getch();
}