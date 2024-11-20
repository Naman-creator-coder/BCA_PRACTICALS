#include<stdio.h>

int main()
{
  int n, numbers, i=0,Sum=0;
  float Average;

  printf("Please Enter How many Number you want?\n");
  scanf("%d",&n);

  printf("Please Enter the elements one by one\n");
  do
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
     i++;
   }while(i<n);

  Average = Sum/n;

  printf("Sum of the %d Numbers = %d\n",n, Sum);
  printf("Average of the %d Numbers = %.2f\n",n, Average);

  return 0;
}