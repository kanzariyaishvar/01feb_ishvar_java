#include<stdio.h>

int model;

void maindata()
{
    printf("Enter your roll no. :-");
    scanf("%d",&model);
}
void otherdata ()
{
    printf("Your roll no. is:-%d",model);
}
void main()
{
    maindata();
    otherdata();
}
