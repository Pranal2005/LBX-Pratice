#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// FunctionName  : Addition
// Input         : Integer,Integer 
// Output        : Integer
// Description   : Perform Addition
// Date          : 04/10/2026
// Author        : Pranal Vilas Naikare
//
////////////////////////////////////////////////////////////////////////

int Addition(int iNo1,int iNo2)     ////parameter or argument are same 
{
    int iAns = 0;

    iAns = iNo1 + iNo2;      //Business logic

    return iAns;

}

////////////////////////////////////////////////////////////////////////
//
// Entry point Application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);
    

    iResult = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iResult);

    return 0;
}

////////////////////////////////////////////////////////////////////////
//  Step 5 : Test the Program
//
//  Tested test program
//---------------------------------------------
//      input1      input2      output
//----------------------------------------------
//         10          11           21
//         11          0            11
//         0           11           11
//         20         -9            11
//         -9           20          11
//         -9          -20         -31
////////////////////////////////////////////////////////////////////////