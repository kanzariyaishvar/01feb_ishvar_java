#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the single charecter");
    scanf("%c",&ch);
    if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
    {
        printf("charecter is 'vowel' ");
    }
    else if (ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'u')
    {
        printf("charecter is vowel");
    }
    else
    {
        printf("charecter is consonant");
    }
}