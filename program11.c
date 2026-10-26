#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ino = 0;

    printf("Enter the number: \n");

    if(scanf("%d",ino) != 1)
    {
        printf("Invalid Number");

        return EXIT_FAILURE;
    }

    printf("Valid Number");

    return EXIT_SUCCESS;
}
