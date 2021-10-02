#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Greatest Common Divisor and Least Common Multiple

int gcdIterative(int num1,int num2){
    int temp;
    while(num2>0){
        temp=num1%num2;
        num1=num2;
        num2=temp;
    }
    return num1;
}

int gcdRec(int num1,int num2){
    return num2==0 ? num1 : gcdRec(num2,num1%num2);
}

void simplifyFraction(int num,int den){
    int gcd=gcdRec(num,den);
    printf("%d/%d\n",(num/gcd),(den/gcd));
}

int lcm(int num1,int num2){
    return (num1*num2)/gcdRec(num1,num2);
}

int main()
{
    printf("%d\n",gcdIterative(5,25));
    printf("%d\n",gcdRec(7,21));
    simplifyFraction(500,35);
    printf("%d\n",lcm(60,10));
}