#include<stdio.h>
int main()
{
    char type;
    printf("Enter the input type:-");
    scanf("%c",&type);
    if (type >=48 && type <=57)
    {
        printf("your type input is number");
    }
    else if (type >=65 && type<=90)
    {
        printf("your type is upercase ALPHABET :-%c",type);
    }
    else if (type >=97 && type<=122)
    {
        printf("your type is lowercase alphabet :-%c",type);
    }
    else
    {
        printf("your type is spsecial charater:-");
    }
}