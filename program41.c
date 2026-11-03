#include<stdio.h.>
#include<stdlib.h>
#include<stdbool.h>

bool Maximum(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Maximum is: %d\n",iNo1);
    }
    else
    {
        printf("Maximum is: %d\n",iNo2);

    }

   
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;
     bool bRet = false;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    if(iValue1 > iValue2)
    {
        printf("Maximum is: %d\n",iValue1);
    }
    else
    {
        printf("Maximum is: %d\n",iValue2);

    }


    return EXIT_SUCCESS;
}