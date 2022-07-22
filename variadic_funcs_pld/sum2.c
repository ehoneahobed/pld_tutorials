#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...);

int main(void){

    int n, mycount;

    scanf("%d", &mycount);
    n = sum(mycount, 45, 5,65, 25, 89, 78, 56, 98, 25, 14, 86, 1545305, 789562);
    printf("%d\n", n);

    return (0);
}

int sum(int count, ...){

    va_list mynumbers;
    va_start(mynumbers, count);
    int result = 0, i;
    
    /* accessing all members of the list */
    for (i = 0; i < count; i++){
        result = result + va_arg(mynumbers, int);
    }
    
    va_end(mynumbers);
    return (result);
}