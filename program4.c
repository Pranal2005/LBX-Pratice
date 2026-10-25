#include <stdio.h>

int main()
{
    int iValue1, iValue2, iResult;

    printf("Enter the first number: \n");
    scanf("%d",&iValue1);

    printf("Enter the second number: \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("Addition is: %d",iResult);



    return 0;
}