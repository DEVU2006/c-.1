#include <stdio.h>

int main()

}

int a=10;

int *ptr=&a;

printf("before a is:%d\n",a);

*ptr=*ptr+20;

printf("after a is:%d\n",*ptr);

return 0;

}
