#include<stdio.h>  
int main()
 {
    int phy,chem,bio,maths,cs;
    float per;char grade;
    printf("Input marks for Physics ");
    scanf("%d",&phy);
    printf("Input marks for Chemistry ");
    scanf("%d",&chem);
    printf("Input marks for Biology ");
    scanf("%d",&bio);
    printf("Input marks for Mathematics ");
    scanf("%d",&maths);
    printf("Input marks for Computer ");
    scanf("%d",&cs);
    per=(phy+bio+chem+cs+maths)/500;
    per*=100;
    if(per>=90)
    {
       grade='A';
    }
    else if(per<90 && per>=80)
    {
      grade='B';
    }
    else if(per<80 && per>=70)
    {
      grade='C';
    }
    else if(per<70 && per>=60)
    {
      grade='D';
    }
    else if(per<60 && per>=40)
    { 
      grade='E';
    }
    else {grade='F';}
    printf("The percentage is %0.3f and grade is %c",per,grade);
    return 0;
}
