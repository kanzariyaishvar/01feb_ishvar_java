#include<stdio.h>
void main()
{
    int a,b;
    int ans;
    float div;
    printf("Enter The Two Value");
    scanf("%d%d",&a,&b);
    ans = a+b;
    printf("\nAddition Of The Two Number:%d",ans);
    ans = a-b;
    printf("\n\nSubstration Of The Two Number%d",ans);
    ans = a*b;
    printf("\n\nMultipication Of The Two Number%d",ans);
    div = (float)a/(float)b;
    printf("\n\nDivision Of The Two Number%f",div);
    ans = a%b;
    printf("\n\nModulo Of The Two Number%d",ans);
}