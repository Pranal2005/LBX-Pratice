/*
    Input:  4
    Output: -4  -3  -2  -1  0   1   2   3   4
    ime Complexity: 2n
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo ; iCnt <= 0; iCnt++)        //time complexity: n or O(N) order of n
    {
        printf("%d\t",iCnt);
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)          //time complexity: n or O(N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

//Time Complexity: O(2N)

int main()
{
    int iValue = 0;

    printf("Enter the value: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}