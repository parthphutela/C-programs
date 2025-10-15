
#include <stdio.h>

int main() {
    printf("Write a program that prompts the user to enter their name and age.\n");
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your name is %s and age is %d.\n",name,age);
    return 0;
}


