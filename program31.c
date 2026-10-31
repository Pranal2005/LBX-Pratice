#include <stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name: \n");
    scanf("%[^'\n']s",sName);           

    printf("Enter your age: \n");
    scanf(" %d",&iAge);             //just add the space before the %d

    printf("Enter your marks: \n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("Your age is: \n",iAge);
    printf("Your marks is: ",fMarks);

    return EXIT_SUCCESS;
}