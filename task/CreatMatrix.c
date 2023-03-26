/* Task is Create Matrix
  1 2 3
  4 5 6
  7 8 9
  Create this types of matrix
*/
#include<stdio.h>
void main()
{
    int s,k;
    int array [3][3] = {1,2,3,4,5,6,7,8,9};
    
    for(s = 0; s < 3; s++)
        {
            for(k = 0; k <3 ; k++)
            {
                printf("%d  ",array[s][k]);
            }
            printf("\n");
        }
}