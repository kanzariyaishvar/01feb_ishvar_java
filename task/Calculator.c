#include<stdio.h>
int main ()
{

    int a,b;
    int ans;
    char n= 'v', k='h';
    float div;
    printf("Enter the valu of 2 no:");
    scanf("%d%d",&a,&b);
    ans = n+k;
    printf("\nAddition of a and b is :%d", n+k);
    ans = a-b;
    printf("\nSubstraction of a and b is:%d",ans);
    ans = a*b;
     printf("\nMultiple of a and b is:%d",ans);
    div = a /b;
    printf("\nDivision of a and b is:%f",div);
    ans = a % b;
     printf("\nModulo of a and b is:%d",ans);
    a++;
     printf("\nAfter increment value of a is:%d",a);
     --b;
     printf("\nAfter decrement value of a is:%d",b);

}