//Write the code of prime number of this because after writing this code the interview will ask write without flag 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt = 0;
  bool bFlag = false;

  for(iCnt = 2; iCnt <= iNo/2; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      break;        //logic optimization (early stoping) after finding 1 factor after 1 i.e iCnt = 2; and break is used in two swtich and for loop
    }
  }
  bFlag =false;
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
