main()
{
int age;
clrscr();
printf("Enter your age");
scanf("%d",age);
printf("you have entered=%d as your age\n",age);

if(age>=18)

{
printf("you can vote!");
}
else if (age>=13)
{
printf("you are between 10 t0 18 and you can vote for kids");
}
else if (age>=3)
{
printf("you have bitweewn 3 to 10 and you can vote for babies");
}
else
 {
 printf("you canote vote!");

}