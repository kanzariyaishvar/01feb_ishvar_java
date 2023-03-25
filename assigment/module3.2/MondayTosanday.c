// Module 3.2 Que 4 (1).
// Monday to Sunday using switch case
#include<stdio.h>
void main()
{
    int day;
    printf("\n1.Monday");
    printf("\n2.Tuesday");
    printf("\n3.Wednesday");
    printf("\n4.Thursday");
    printf("\n5.Friday");
    printf("\n6.Saturday");
    printf("\n7.Sunday");
    printf("\nEnter A day :- ");
    scanf("%d",&day);
    printf("\nToday is :-");
    switch (day)
    {
        case 1:
        printf("\n\t\tMonday");
        break;

        case 2:
        printf("\n\t\tTuesdday");
        break;

        case 3:
        printf("\n\t\tWednesday");
        break;


        case 4:
        printf("\n\t\tThursday");
        break;

        case 5:
        printf("\n\t\tFriday");
        break;

        case 6:
        printf("\n\t\tSaturday");
        break;

        case 7:
        printf("\n\t\tSunday");
        break;

        default :
        printf("\n\t\tNot any days");
        break;
    }
}