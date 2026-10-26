#include<stdio.h>
#include<stdlib.h>

int Addition(int iNo1 , int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;

    return iAns;
}

int main()
{

int iValue1 = 0, iValue2 = 0, iResult = 0;

printf("Enter the first number: \n");
if(scanf("%d",&iValue1) != 1)
{
    printf(stderr,"Unable to processed the input");
}
printf("Enter the second number: ");
if(scanf("%d",&iValue2) != 1)
{
    printf(stderr,"Unable to processed the input");
}

iResult = Addition(iValue1, iValue2);

printf("Addition is: %d\n",&iResult);

    return EXIT_SUCCESS;
}