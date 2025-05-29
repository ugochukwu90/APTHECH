#include <stdio.h>
struct Rectangle
{
    float length;
    float width;
};

int main()
{
    struct Rectangle rect1 = {23.4, 12.5};
    struct Rectangle rect2;
    
     rect2.length = 15.0;
     rect2.width = 10.0;
   
    printf("RECTANGLE 1: Length = %.2f, Width = %.2f\n", rect1.length, rect1.width);
    printf("RECTANGLE 2: Length = %.2f, Width = %.2f\n", rect2.length, rect2.width);
}

     