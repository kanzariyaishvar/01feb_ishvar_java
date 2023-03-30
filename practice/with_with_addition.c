#include<stdio.h>
int rock (int r, int c)
{
    return r + c;
}
int main ()
{
    int x,y;
    printf("Enter the value of x .:-");
    scanf("%d",&x);
    printf("Enter the value of y .:-");
    scanf("%d",&y);
    printf("%d",rock(x,y));
    return 0;
}