#include <stdio.h>
long long factorial(int n){
    if(n == 0 || n == 1)
    return 1;
    else
    return n * factorial(n - 1);
}
int main(){
    int number;
    printf("Enter a possitive integer");
    scanf("%d", &number);
    if(number < 0)
    printf("Factorial is not defined for negative numbers.\n");
    else
    printf("Factorial of %d is %11d\n , number, factoarial(number)");
return 0;

}
