#include<stdio.h>
void main ()
{
    int a;
    int ans;
    printf("Enter Your age");
    scanf("%d",&a);
    printf("your current age in 2023 %d",a);
    ans=a++;
    printf("Your age 2024 in %d",a);
    ans=a--;
    printf("Your age 2025 in %d",a);
}