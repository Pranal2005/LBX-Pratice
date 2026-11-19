/*
    Input:  4
    Output: A   B   C   D
    ASCII Value =  A:65 to 90 a:97 to 122


*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt <= 90; iCnt++)
    {
        printf("%d\n",iCnt);
    }

    return EXIT_SUCCESS;
}