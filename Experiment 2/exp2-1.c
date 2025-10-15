//Experiment2
//1 WAP a C program to calculate the area and perimeter of rectangle based on its length and width.

#include <stdio.h>
int main() {
    printf(WAP a C program to calculate the area and perimeter of rectangle based on its length and width.\n");
    int l ,b;
    int p,a;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &b);
    if (l<0 && b<0)
    {
    printf("Length and width can not be less than 0\n");
    }
    else if (b<0)
    {
    printf("Width can not be less than 0\n");
    }
    else if (l<0)
    {
    printf("Length can not be less than 0\n");
    }
    else
    {
    a=l*b
    p=2*(l+b);
    printf("Area of the rectangle: %d\n", a);
    printf("Perimeter of the rectangle: %d\n", p);
    return 0;
}
