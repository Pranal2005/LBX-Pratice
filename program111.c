#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt = 0;

  for(iCnt = 2; iCnt <= iNo/2; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      return false;       //It is not good programming pratice because other number in loop is getting block after entering in if block in (for loop it is pratice)
    }
  }
 return true;
}

int main(void)
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter Number: \n");
  scanf("%d",&iValue);

  bRet = CheckPrime(iValue);

  if(bRet)
  {
    printf("It is prime number\n");
  }
  else
  {
    printf("It is not prime number");
  }
  
  return EXIT_SUCCESS;
}
