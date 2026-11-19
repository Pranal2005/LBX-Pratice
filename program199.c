/*
    Input:  4
    Output: A   B   C   D
    ASCII Value =  A:65 a:97

    We don't have to use Asci value

*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    char ch = '\0';

    for(ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%d\t%o\t%x\t%c\t\n",ch,ch,ch,ch);
    }

    return EXIT_SUCCESS;
}