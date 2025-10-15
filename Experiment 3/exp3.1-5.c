//5 WAP using ternary operator, the user should input the length and breadth of rectangle,one has to find out which rectangle has
the highest perimeter,The minimum number of rectangle should be three.

#include <stdio.h>
int main() {
    float length1, breadth1, length2, breadth2, length3, breadth3;
    float perimeter1, perimeter2, perimeter3;
    int maxRect;

    printf("Enter length and breadth of rectangle 1: ");
    scanf("%f %f", &length1, &breadth1);
    perimeter1 = 2 * (length1 + breadth1);

    printf("Enter length and breadth of rectangle 2: ");
    scanf("%f %f", &length2, &breadth2);
    perimeter2 = 2 * (length2 + breadth2);

    printf("Enter length and breadth of rectangle 3: ");
    scanf("%f %f", &length3, &breadth3);
    perimeter3 = 2 * (length3 + breadth3);

    maxRect = (perimeter1 > perimeter2) ? ((perimeter1 > perimeter3) ? 1 : 3)
                                       : ((perimeter2 > perimeter3) ? 2 : 3);

    printf("The rectangle with the highest perimeter is rectangle %d.\n", maxRect);

    return 0
