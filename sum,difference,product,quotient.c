#include <stdio.h>
int main() {
    int a, b,  sum, differnce, product, quotient;
    printf(" enter the value of a");
    scanf("%d", &a);
    printf(" enter the value of b");
    scanf("%d", &b);
    sum=a+b;
    differnce=a-b;
    product=a*b;
    quotient=a/b;
    printf("%d\n%d\n%d\n%d\n",sum,differnce,product,quotient);
}
