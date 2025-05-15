#include<stdio.h>
 int main(){
     int a=7;
     int *b=&a;
     *b=*b+14;
     printf("a=%d\n",a);
     printf("b*=%d\n",*b);
}
