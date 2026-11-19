/*
    Input:  4
    Output: -4  -3  -2  -1  0
    Time Complexity: O(2n)
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo ; iCnt <= iNo; iCnt++)      //0(N)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}



int main()
{
    int iValue = 0;

    printf("Enter the value: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}