#include<stdio.h>
void main()
{
    float pie;
    float area;
    float radius;
    pie = 3.14159;
    printf("Enter The Radius Value:");
    scanf("%f",&radius);
    area = pie*radius*radius;
    printf("Totle Area Circle Value%f",area); 
}