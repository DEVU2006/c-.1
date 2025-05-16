#include <stdio.h>
int main() {
    int arr[100] ={1,2,3,4,5} , n=5 ,i;
    int *start, *end, temp;
    start = arr;
    end = arr + n-1;
    while (start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
        
    }
    for (i = n -1;i>=0;i--){
        printf("%d",arr[i]);
    }
}