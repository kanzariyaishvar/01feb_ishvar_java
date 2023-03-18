#include <stdio.h>
void main()
{
    int a,b,c,max;
    printf("Enter the first value:-");
    scanf("%d",&a);
    printf("Enter the second value:-");
    scanf("%d",&b);
    printf("Enter the third value:-");
    scanf("%d",&c);
    (a > b) ? ((a > c) ? (printf("\nA is max:")): printf("\nc is max:")) : (b > c) ? (printf("\nb is max:")) : (printf("\nc is max"));
}