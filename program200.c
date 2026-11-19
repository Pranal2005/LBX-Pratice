/*
    Input:  4
    Output: A   B   C   D
    ASCII Value =  A:65 a:97


*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    char ch = '\0';

    for(ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c\n",ch);
    }

    return EXIT_SUCCESS;
}