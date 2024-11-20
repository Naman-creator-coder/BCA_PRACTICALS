#include <stdio.h>
 
int main()
{
    int num, temp, remainder, reverse = 0;
 
    printf("Enter an integer :\n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("\nGiven number is : %d\n", temp);
    printf("Its reverse is  : %d\n", reverse);
    if (temp == reverse)
        printf("\nNumber is a palindrome \n\n");
    else
        printf("\nNumber is not a palindrome \n\n");
return 0;
}
