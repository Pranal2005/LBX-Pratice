#include<stdio.h>
#include<stdlib.h>

void CheckDivsible(int iNo)
{
  if((iNo % 3)==0)
  {
    printf("Number is divisible by 3\n");
  }  
  else
  {
    printf("Number is not divisible by 3\n");
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