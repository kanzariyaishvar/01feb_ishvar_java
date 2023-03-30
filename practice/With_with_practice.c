#include<stdio.h>
int house (int h ,int k)
{
    return h/k;
}
int main()
{
    int h,s;
    printf("Enter the value of h. :-");
    scanf("%d",&h);
    printf("Enter the value of s. :-");
    scanf("%d",&s);
    printf("%d",house(h,s));
    return 0;
}