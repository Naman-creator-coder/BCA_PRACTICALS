#include<stdio.h>
int main(){
int num;
printf("Enter any number :");
scanf("%d",&num);
int fact=1;
for (int i = 1; i <= num; i++)
{
    fact = fact * i;
}


printf("your factorial is : %d",fact);





}