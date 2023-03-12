#include<stdio.h>
void main()
{
    float days;
    float year;
    printf("Enter The days:");
    scanf("%f",&days);
    year = (float)days/(float)365;
    printf("Day To Year Iqual:%f",year);
}