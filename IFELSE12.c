#include<stdio.h>  
int main()
{
    int bs,hra,da,gs;
    printf("Input basic salary ");
    scanf("%d",&bs);
    if(bs>20000)
    {
      hra=bs*0.3;
      da=bs*0.95;  
    }
    else if(bs<=20000 && bs>10000)
    { 
      hra=bs*0.25;
      da=bs*0.9;
    }
    else if(bs<=10000)
    { 
      hra=bs*0.2;
      da=bs*0.8;
    }
    gs=bs+da+hra;
    printf("The gross salaray is %d",gs);
    return 0;
}
