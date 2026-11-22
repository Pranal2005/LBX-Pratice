/*
    iRow = 4
    iCol = 4

A   A   A   A          odd
B   B   B   B          even
C   C   C   C           odd
D   D   D   D          even

Time Complexity = O(N^2)

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1,ch = 'A'; i <= iRow; i++,ch++)
    {
        
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        } 
    
        printf("\n\n");
    }
}


int main()
{
    int iValue1 = 0;       //3
    int iValue2 = 0;       //4
    
    printf("Enter number of row: \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns: \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    

    return EXIT_SUCCESS;
}