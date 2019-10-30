#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mass,choice;
    char option;
    float result;
    printf("1 kilogram to pound");
    printf("2 pound to kilogram");
    printf("Enter choice");
    scanf("%d",&choice);
    printf("Enter mass");
    scanf("%d",&mass);
    if(choice==1);
    {
        printf("The result is %d",mass*2500);
    }
    if(choice==2);
    {
        printf("The result is %d",mass/1000);
    }
    getch();
    return 0;
}



