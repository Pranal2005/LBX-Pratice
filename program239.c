#include<stdio.h>
#include<stdlib.h>

void Display(char str[])
{
    printf("%s\n",str);

}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);           //Display("Ganesh") = call by value -> wrong and Display(100) = call by address -> correct;

    return EXIT_SUCCESS;
}
