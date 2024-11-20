#include <stdio.h>
int main()
{   
    float rupees,dollar,result;
     int choice;
    
    {
        printf("Convert Your Currency here\n");
        printf("Press 1: for convert RUPEE to DOLLAR");
        printf("\nPress 2: for convert DOLLAR to RUPEE");
        printf("\nEnter Your Choice : \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter the Currency in Rupees = Rs.");
                scanf("%f",&rupees);
                result=rupees/84.15;
                printf("\nRate of Rs.%.1f/- in US Dollar is = %.3f$\n\n",rupees,result);
                break;
            case 2:printf("\n\nEnter the currency in Dollar = $");
                scanf("%f",&dollar);
                result=dollar*84.15;
                printf("Rate of %.1f$ in Indian Rupee is = Rs.%.2f/-\n\n",dollar,result);
                break;
            default :
            printf("\n\n[SORRY! YOU HAVE ENTERED WRONG NUMBER]\n\n");
        }
    return 0;
}
}
