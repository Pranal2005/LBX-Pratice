#include<stdio.h>
#include<stdlib.h>

void Display(char *str)                 //Due to this we know that arry is internal treated as pointer;
{
    printf("%s\n",str);

}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);

    return EXIT_SUCCESS;
}
