#include<stdio.h>
void main()
{
    float amount,time,intrestonrate;
    float interest;
    float ans;
    printf("Enter Your Amount:");
    scanf("%f",&amount);
    printf("Enter year:");
    scanf("%f", &time);
    printf("Enter the interest Rate:");
    scanf("%f",&intrestonrate);
    interest=(amount*time*intrestonrate)/(100);
    printf("Your amount rate is %f",interest);
    ans=amount+interest;
    printf("your Totale amount is %f",ans);
}