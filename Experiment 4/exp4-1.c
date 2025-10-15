    #include<stdio.h>
    int globalvar = 10;
    void func1()
    {
        printf("Inside fun2,globalvar modified to = %d\n",globalvar);
    }
    void func2() {
        globalvar = 20;
        printf("Inside fun2, globalvar modified to = %d\n, globalvar");
    }
    int main() {
        printf("Inside main, globalvar = %d\n", globalvar);
        func1();
        func2();
        printf("After func2 call, globalvar in main = %d\n", globalvar);
    
        return 0;
    }

    

    

