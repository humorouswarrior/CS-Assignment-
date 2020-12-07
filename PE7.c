//MIRRORED DIAMOND STAR PATTERN

#include<stdio.h>
int main()
{
  int i, j, k, f=1;
  k=4;
  for(i=1; i<10; i++)
    {
        for(j=1; j<=k; j++)
            printf(" ");
        for(j=1; j<=f; j++)
            printf("*");
        printf("\n");
        if(i < 5) 
        {
            f++;
            k--;
        }
        else
        {  
            f--;
            k++;
        }
    } 
    return 0;
}
