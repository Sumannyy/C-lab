#include <stdio.h>

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = 3.14159 * radius * radius;
    printf("Area of the circle: %.2f\n", area);
    return 0;
}