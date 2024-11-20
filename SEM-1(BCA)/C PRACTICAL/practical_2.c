#include<stdio.h>

int main(){
float N1,N2,N3;
printf("Enter 1st number :");
scanf("%f",&N1);
printf("Enter 2nd number :");
scanf("%f",&N2);
printf( "Enter 3rd number :");
scanf("%f",&N3);
if (N1 > N2 && N1 > N3)
{
    printf(" is the greater number : %.2f",N1);
}
else if (N2 > N1 && N2 > N3)
{
    printf("is the greater number : %.2f",N2);
}
else{
    printf(" the greater number : %.2f",N3);
}





}