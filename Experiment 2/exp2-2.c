//2 WAP a C program to convert temperature from Celsius to Fahrenheit using the formula: F= (C*9/5) + 32

#include <stdio.h>

int main() {
    printf("WAP a C program to convert temperature from Celsius to Fahrenheit using formula: F= (C*9/5) = 32\n";
    float c;
    float f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f);
    return 0;
}
