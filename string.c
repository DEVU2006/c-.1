#include <stdio.h>
#include <string.h> 
int main() {
    char name[20];
    printf ("enter your name");
    scanf("%s", &name);
    printf("enter your name is %s",name);
    int length=strlen(name);
    printf("%d",length);
}
