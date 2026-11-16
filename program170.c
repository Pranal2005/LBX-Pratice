/*
Input : 6457  -> 5.5;
Input : 734   -> 4.66
Input : 45    -> 4.5

*/

#include<stdio.h>
#include<stdlib.h>

int AverageDigits(int iNo)
{
    int iDigit =0, iSum = 0, iCount =0;
    float fAvg = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;

        iNo = iNo / 10;
    }
    fAvg = iSum/iCount;
    return fAvg; 
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digit: %f\n",fRet);

    return EXIT_SUCCESS;
}