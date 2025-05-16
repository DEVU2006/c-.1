#include <stdio.h>

int main()
{
    char name [20];
    printf("Enter your name:");
    fgets (name, 10, stdin);
    printf(" your name is:%s", name);
}
