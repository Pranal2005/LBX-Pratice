/*
Input : 6457  -> 5.5;
Input : 734   -> 4.66
Input : 45    -> 4.5

*/

#include<stdio.h>
#include<stdlib.h>

int AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        //---Logic-----
        iSum = iSum + iDigit;
        iCount++;
        
        iNo = iNo/10;
    
    
    }
    return (iSum/iCount);

}

int main()
{
    int iValue = 0;
    float fRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digit: %d\n",fRet);

    return EXIT_SUCCESS;
}