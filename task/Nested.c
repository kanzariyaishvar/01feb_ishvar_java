#include<stdio.h>
int main()
{
    int choise;
    int ch;
    printf("\n1.hot drink\n2.cold drink:");
    printf("\nEnter your choise");
    scanf("%d",&choise);
    switch (choise)
    {
        case 1:
        printf("\nhot drink:");
        printf("\n 1.hot coffee \n 2.hot tea");
        printf("\nEnter your choise");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n1.hot cofee");
                break;
            case 2:
                printf("\n2.hot tea");
                break;
            default:  
                printf("\ninvalid");
                break; 
        }
        case 2:
            printf("\ncold drink");
            printf("\n1.pepsi\n2.Maza");
            printf("\nEnter your choise");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    printf("\n1.pepsi");
                    break;
                case 2:

                    printf("\n2.Maza");
                    break;  
                default:
                    printf("invalid");
                    break;  
            }
    }
        
}