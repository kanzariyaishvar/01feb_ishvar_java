#include<stdio.h>
void main()
{
    char string [20];
    int s,lenth=0;
    printf("\nEenter your name :-");
    scanf("%s",string);
    for(s = 0 ; string[s] != '\0' ;s++)
    {
        lenth++;
    }
    printf("\nLenth of string is %d",lenth);
}