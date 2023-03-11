#include<stdio.h>
void main()
{
    int Year;
    printf("Enter The Year");
    scanf("%d",&Year);
    if (Year%400==0)
    {
        printf("%d  year is leap year",Year);
    }
    else if(Year%100==0)
    {
        printf("%d  year is not leap year",Year);
    }
    else if(Year%4==0)
    {
        printf("%d year is leap year",Year);

    }
    else
    {
        printf("  year is not leap year",Year);
    }
}