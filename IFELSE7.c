#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three angles : ");
  scanf("%d %d %d",&a,&b,&c);
if (a+b+c==180)
{
    printf("The triangle is valid");
}
Else
{
    printf("The triangle is not valid pls enter again");
}
return 0;
}
