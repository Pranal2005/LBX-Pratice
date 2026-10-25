#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no;
    int ret;

    printf("Enter the value: \n");
    ret = scanf("%d",&no);

    printf("Return value is: %d\n",ret);

    return EXIT_SUCCESS;
}