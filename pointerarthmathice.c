#include <stdio.h>
int main() {
    int arr[100] ={1,2,3,4,5},i;
    int *dev =arr;
    for(i=0;i<5;i++){
        printf("%d ",*(dev+1));
        printf("%p ",dev+i);
    }
    }
