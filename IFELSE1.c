#include<stdio.h>
int main()
 {
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a%11==0 && a%5==0)
    {
        printf("The number is divisible by 11 and 5 both");
    }
    else {printf("The number is NOT divisible by 11 and 5 both"); 
}
    return 0;
} 
