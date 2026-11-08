/*
------------------------------------------------
               Operation &&
------------------------------------------------
Result 1        Result 2          Final Result
------------------------------------------------
TRUE              TRUE                TRUE
TRUE              FALSE               FALSE
FALSE             TRUE                FALSE                     Short Circuit
FALSE             FALSE               FALSE                     Short Circuit
------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivsible(int iNo)
{
  if(((iNo % 3)==0) && (iNo % 5) == 0)
  {
    printf("Number is divisible by 3 and 5");
  }  
  else
  {
    printf("Number is not divisible by 3 and 5");
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