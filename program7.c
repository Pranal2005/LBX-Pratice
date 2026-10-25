/*
    Step 1: Understand the problem statement 
    Step 2: Write the algorthim
    Step 3: Decide the programming language
    Step 4: Write the program
    Step 5: Test the program
*/

/////////////////////////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statement 
//          User is going to entry any two integers
//          and we have to perform addition
//         
/////////////////////////////////////////////////////////////////////////
//   Step 2 : Write the algorthim
/*
    START 
        Accept first number as no1
        Accpect second as no2
        Create the variable as ans to store the result
        Perform the addition and store into ans
        Display hte result from ans
    END
*/
////////////////////////////////////////////////////////////////////////
//
// Step 3: Decide the programming language
//          We select c programming
//
////////////////////////////////////////////////////////////////////////
//
//  Step 4 : Write the program
//
////////////////////////////////////////////////////////////////////////


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

int Addition(int iNo1,int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;      //Business logic

    return iAns;

}

////////////////////////////////////////////////////////////////////////
//
// Entry Point of the Application
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