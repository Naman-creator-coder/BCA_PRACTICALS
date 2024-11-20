#include <stdio.h>
int main()
{
    int eng, math, problem; 
    float per; 
  
    printf("Enter English subjects marks : \n");
    scanf("%d",&eng);
    
    printf("Enter Math subjects marks : \n");
    scanf("%d",&math);

    printf("Enter Problem solving using computers subjects marks : \n");
    scanf("%d",&problem);

    per = (eng + math + problem) / 3.0;

    printf("your Percentage is = %.2f\n", per);

    if(per >= 75)
    {
        printf("Grade O");
    }
    else if(per >=60)
    {
        printf("Grade A");
    }
    else if(per >= 50)
    {
        printf("Grade B");
    }
    else if(per >=40)
    {
        printf("Grade C");
    }
    else if(per >= 0)
    {
        printf("Grade D");
    }
    return 0;
}
