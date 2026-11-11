//Write the code of prime number of this because after writing this code the interview will ask write without flag 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
  int iCnt = 0;
  bool bFlag = false;

  for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      bFlag = false;       // still loop works till end
    }
  }
  return bFlag;
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
