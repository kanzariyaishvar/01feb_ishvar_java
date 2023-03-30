#include<stdio.h>
int data (int s, int k)
{
    return s%k;
}
int main()
{
    int s,k;
    printf("Enter the value of s and k :-");
    scanf("%d%d",&s,&k);
    printf("%d",data(s,k));
    return 0;
}