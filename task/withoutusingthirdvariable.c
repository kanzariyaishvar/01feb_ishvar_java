#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a:-");
    scanf("%d",&a);
    printf("Enter the value of b:-");
    scanf("%d",&b);
    printf("\n\t add %d  + %d = %d",a,b,a+b);
    printf("\n\t add %d  - %d = %d",a,b,a-b);
    printf("\n\t add %d  * %d = %d",a,b,a*b);
    printf("\n\t add %d  / %d = %d",a,b,a/b);
    printf("\n\t increement of a %d",a++);
    printf("\n\t Decreement of b %d",a--);
}