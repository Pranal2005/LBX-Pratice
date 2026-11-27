//$ % & # *


#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0;
    int iCountCapital = 0;
    int iCountDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }
        str++;
    }

    printf("Number of Small letters: %d\n",iCountSmall);
    printf("Number of Capital letter: %d\n",iCountCapital);
    printf("Number of Digits: %d\n",iCountDigit);
}


int main()
{
    char Arr[100] = {'\0'};

    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

     CountFrequencyX(Arr);

   
    return EXIT_SUCCESS;
}
