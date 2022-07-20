#include <stdio.h>

/* prototypes for functions used */
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main() {
    int (*ptOperator[])(int, int) = {add, subtract, divide, multiply}; 

    /* A pointer to an array of functions that take in two integer arguments and returns an integer */

    printf("Which operation do you want to perform? Press\n 0 for add\n 1 for subtract\n 2 for divide\n 3 for multiply\n\n");
    printf("What do you choose: ");
    int choice;
    scanf("%d", &choice);
    int result =  (ptOperator[choice])(14, 10);
    printf("%d\n",result);
    return 0;
}

/* defining the various functions */
int add(int x, int y){
    return (x+y);
}

int subtract(int x, int y){
    return (x-y);
}
int multiply(int x, int y){
    return (x*y);
}
int divide(int x, int y){
    return (x/y);
}