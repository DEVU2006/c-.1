#include <stdio.h>

int main() {

int arr[]={1,2,3,4,5};

int i;

int *ptr=arr;

for(i=0;i<5;i++)

{

printf("pointer value is %d\n",*ptr

);

*ptr++;

}

return 0;

}
