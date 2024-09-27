#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    printf("entertheprinciple :");
    scanf("%f",&p);
    printf("enter the rate:");
    scanf("%f",&r);
    printf("enter the time:");
    scanf("%f", &t);
     
     ci=p * pow((1 + r /100),t)-p;
     printf("\nThe compound intrest is %f",ci);
     return 0;
}