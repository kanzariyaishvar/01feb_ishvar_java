#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the single charecter:-");
    scanf("%c", &ch);
    if (ch == 'a'|| ch == 'A'||ch == 'e'|| ch == 'E'|| ch == 'u'|| ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U' )
    {
        printf("Enter the charecter is vowel");
    }
    else if (ch >=65 && ch <=122 && !(ch == 'a'|| ch == 'e'||ch == 'i'|| ch == 'o'|| ch == 'u'|| ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'))
    {
        printf("Enter the charecter is constant");
    }
    else
    {
        printf("Enter the charecter is special charecter:-");
    }
}