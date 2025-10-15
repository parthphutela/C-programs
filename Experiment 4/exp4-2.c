#include <stdio.h>

int a = 10; 

void test() {
    int a = 20; 
    printf("Inside test() function, local a = %d\n", a);
}

int main() {
    printf("Inside main() function, global a = %d\n", a);
    test();
    printf("Back in main(), global a = %d\n", a);
    return 0;
}
