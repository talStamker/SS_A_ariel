#include<stdio.h>
#include "NumClass.h"
int main(){
    int x,y,max,min;
    scanf("%d%d",&x,&y);
    if(x<y){
        max=y;
        min=x;
    }else{
        max=x;
        min=y;
    }
    printf("The Armstrong numbers are:");
    for (int i = min; i <= max; i++)
    {
        if (isArmstrong(i)==1)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");
     printf("The Palindromes are:");
    for (int i = min; i <=max; i++)
    {
        if (isPalindrome(i)==1)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i =min ; i <= max; i++)
    {
        if (isPrime(i)==1)
        {
            printf(" %d",i);
        }
        
    }
    
    printf("\n");
     printf("The Strong numbers are:");
    for (int i = min; i <= max; i++)
    {
        if (isStrong(i)==1)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");

    return 0;
}