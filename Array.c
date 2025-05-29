#include<stdio.h>
    int main1() {
        int a = 2;
        int b = 5;
    
        // Print original values
        printf("Before swapping: a = %d, b = %d\n", a, b);
    
        // Swap the values
        int temp = a;
        a = b;
        b = temp;
    
        // Print swapped values
        printf("After swapping: a = %d, b = %d\n", a, b);
    
        return 0;
    }


