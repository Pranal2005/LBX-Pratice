/*
    Input:  4
    Output: A   B   C   D
    ASCII Value =  A:65 a:97


*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iCnt = 0;

    for(iCnt = 97; iCnt <= 122; iCnt++)
    {
        printf("%c\n",iCnt);
    }

    return EXIT_SUCCESS;
}