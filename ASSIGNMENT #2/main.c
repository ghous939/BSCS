#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mass,choice;
    float result;
    char option;
    printf("1, KILOGRAM TO POUND");
    printf("2,POUND TO KIOGRAM");
    printf("Enter choice");
    scanf("%d",&choice);
    printf("Enter mass");
    scanf("%d",&mass);
    if(choice==1);
    {
        printf("The result is %f",mass*2.205);
    }
    if(choice==2);
    {
        printf("The result is %f",mass*0.454);
    }
    getch();
    return 0;
}
