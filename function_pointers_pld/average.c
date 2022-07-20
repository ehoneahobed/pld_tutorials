#include <stdio.h>

/* prototypes for functions used */
int sum(int x, int y);
int average(int (*ptF)(int, int), int a, int b);

int main() {
    
    int (*ptSum)(int, int) = sum;
    int value = average(ptSum, 8, 2);
    
    printf("%d\n", value);
    
    return 0;
}

int sum(int x, int y){
    return (x+y);
}

int average(int (*ptF)(int, int), int a, int b){
    int n = ptF(a,b);
    return (n/2);  
}