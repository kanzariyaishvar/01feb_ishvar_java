#include<stdio.h>
int oreo(int o,int r)
{
    return o-r;
}
int main()
{
    int a,b;
    printf("Enter the value of a. :-");
    scanf("%d",&a);
    printf("Enter the value of b. :-");
    scanf("%d",&b);
    printf("your ans is =>");
    printf("%d",oreo(a,b));
    return 0;
}