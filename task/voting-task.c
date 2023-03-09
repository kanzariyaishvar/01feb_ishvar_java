#include<stdio.h>
void main()
{
    int age;
    printf("Enter your birth year");
    scanf("%d",&age);
    if (age >= 18)
    {
        printf("Yes,Your Are Eligible For Voting");
    }
    else
    {
        printf("No Sorry,But you Are Not Eligible For Voting");
    }
}