//Fisrt we have to write this code in interview so we can optimize the with help of && operator

#include<stdio.h>
#include<stdlib.h>

void CheckDivsible(int iNo)
{
  if((iNo % 3)==0) 
  {
      if((iNo % 5) == 0)
      {
        printf("It is divisibe\n");
      } 
      else
      {
        printf("It is not divisible\n");
      }
   }
  else
  {
    printf("It is divisible");
  }
}

int main()
{
    int iValue = 0;         //local variable

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    CheckDivsible(iValue);

    return EXIT_SUCCESS;
}