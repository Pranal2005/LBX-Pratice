/*
------------------------------------------------
               Operation ||
------------------------------------------------
Result 1        Result 2          Final Result
------------------------------------------------
TRUE              TRUE                TRUE                      Short Circuit
TRUE              FALSE               TRUE                      Short Circuit
FALSE             TRUE                TRUE                      
FALSE             FALSE               FALSE 
------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivsible(int iNo)
{
  if(((iNo % 3)== 0) || (iNo % 5) == 0)
  {
    printf("It is divisible ");
  }  
  else
  {
    printf("It is  not divsible\n");
  }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    CheckDivsible(iValue);

    return EXIT_SUCCESS;
}