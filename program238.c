#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int iCnt = 0;
    char Arr[20] = "Jay Ganesh";
    char *ptr = NULL;

    ptr = &(Arr[0]);

    while(*ptr != '\0')
    {
        iCnt++;                 //it is also logic
        //Logic
        ptr++;
    }

    printf("Length of string is: %d\n",iCnt);

    return EXIT_SUCCESS;
}
