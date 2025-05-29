#include <stdio.h>


struct Rectangle {
    float length;
    float width;
};


double calculatePerimeter(struct Rectangle r) {
    return 2 * (r.length + r.width);
}

int main() {
    struct Rectangle rect;

 
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);

 
    double perimeter = calculatePerimeter(rect);
    printf("The perimeter of the rectangle is: %.2lf\n", perimeter);

    return 0;
}
