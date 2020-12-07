#include<stdio.h>  
int main()
 {
    int ele; float bill,temp,extra;
    printf("Input electric units ");
    scanf("%d",&ele);
    if(ele<=50)
    { 
      bill=ele*0.5;
    }
    else if(ele>50 && ele<=150)
    {
    temp=ele-50;
      bill=(50*0.5)+(temp*0.75);
   }
    else if(ele>150 && ele<=250)
    { 
     temp=ele-150;
      bill=(50*0.5)+(100*0.75)+(temp*1.2);
    }
    
    if(ele>250)
    {
      extra=ele-250;
      extra=extra*0.2;
    }
    else { extra=0;}
    bill=bill+extra;
    printf("The electicity bill is %0.2f",bill);
    return 0;
}
