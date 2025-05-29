#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// int main()
// {
// unsigned int good = 23444;
// char a[] = "how are you";
// char b = 'e';
// int  c = 12;
// float d = 20.6;
// double e = 2.33344455;

// printf("%u\n",good);
// printf("%s\n",a);
// printf("%c\n",b);
// printf("%d\n",c);
// printf("%f\n",d);
// printf("%lf\n",e);
// }

// int main()
// {
//     printf("Hello world!\n");
//     return 0;
// }

// int main(){
//     int a =5;
//     int b=6;
//     int sum=(a+b);
//     printf("the sum is %d\n",sum);

// }

// int main() {
//    int age = 25;
//    unsigned int count = 100;
//    printf(" %d, %u\n", age, count);
//    return 0;
// }

// int main(){
//    signed int temperature =-10;
//    unsigned int count = 4000000000;
//    printf(" %d, %u\n",temperature,count);
// }
// int main(){
//    float discount = 9.25;
//    double gravity= 966.90444;
//    printf("Multiply:%.3f/n",discount,gravity);

// }

// int main(){
//    char a = 'g';
//    printf("i am doing %c\n",a);
// }

// int main() {
//     char username[50] = "ugochukwu";
//     strcat(username, "@gmail.com");
//     printf("Email Address: %s\n", username);
//     return 0;
// }

// int main() {
//     int*ptr = NULL;
//     ptr = (int*)malloc(sizeof(int));
//     if(ptr != NULL){
//        *ptr = 42;
//        printf("value:%d/n",*ptr);
//        free(ptr);

//     }else
//     {
//         printf( "Memory allocation failled!\n");
//     }
//      return 0;

// }

// int main()
// {
//     char *ptr = NULL;
//     ptr = (char *)malloc(sizeof(int));
//     if (ptr != NULL)
//     {
//         *ptr = 'snxdnd';
//         printf("value:%d/n", *ptr);
//         free(ptr);
//     }
//     else
//     {
//         printf("Memory allocation failled!\n");
//     }
//     return 0;
// }
// int main(){
//     int x;
//     printf("Uninitializedx:%d/n",x);
//     int *ptr = NULL;
//     if (ptr == NULL){
//         printf("pointer is Null, avoidimg undefined behavior.\n"); 
//     }
//     return 0;
    
    
// }

//  int main()
//  {    
//     int age;
//     printf("please how old are you? %s");\
//     scanf("%d", &age);
//     printf("you are %d years old",age);
// }


// void calQuadEquate() {
//     double a, b, c, discriminant, solution1, solution2;

//     // Input coefficients
//     printf("Enter coefficient of x^2 (a): ");
//     if (scanf("%lf", &a) != 1 || a == 0) {
//         printf("Invalid input or 'a' cannot be zero. This is not a quadratic equation.\n");
//         return;
//     }

//     printf("Enter coefficient of x (b): ");
//     if (scanf("%lf", &b) != 1) {
//         printf("Invalid input for 'b'.\n");
//         return;
//     }

//     printf("Enter constant term (c): ");
//     if (scanf("%lf", &c) != 1) {
//         printf("Invalid input for 'c'.\n");
//         return;
//     }

//     // Display the quadratic equation
// //     printf("The quadratic equation is: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);

// //     // Calculate the discriminant
// //     discriminant = b * b - 4 * a * c;

//     // Determine the nature of the roots
//     if (discriminant > 0) {
//         // Two distinct real roots
//         solution1 = (-b + sqrt(discriminant)) / (2 * a);
//         solution2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("The roots are real and distinct:\n");
//         printf("Root 1 = %.2f\n", solution1);
//         printf("Root 2 = %.2f\n", solution2);
//     } else if (discriminant == 0) {
//         // One real root (repeated)
//         solution1 = -b / (2 * a);
//         printf("The roots are real and equal:\n");
//         printf("Root = %.2f\n", solution1);
//     } else {
//         // Complex roots
//         double realPart = -b / (2 * a);
//         double imaginaryPart = sqrt(-discriminant) / (2 * a);
//         printf("The roots are complex and conjugate:\n");
//         printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
//         printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
//     }
// // }
// int main(){
//     char name[]= "Ugochukwu";
//     printf("My name is %s\n",name);
//     return 0;
// }

// int main(){
// char food[] ="fried yam and sauce";
//  printf("My favorite food is %s\n",food);
//    return 0;
// }

#include <stdio.h>
#include <string.h>

// int main() {
//     char str1[100], str2[100];

//     printf("Enter the first string: ");
//     fgets(str1, sizeof(str1), stdin);

//     printf("Enter the second string: ");
//     fgets(str2, sizeof(str2), stdin);

    
//     str1[strcspn(str1, "\n")] = 0;
//     str2[strcspn(str2, "\n")] = 0;

//     if (strcmp(str1, str2) == 0) {
//         printf("The strings are equal.\n");
//     } else {
//         printf("The strings are not equal.\n");
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

// int main() {
//     char password1[100], password2[100];

//     printf("Enter your password: ");
//     scanf("%s", password1);

//     printf("Confirm your password: ");
//     scanf("%s", password2);

//     if (strcmp(password1, password2) == 0) {
//         printf("Password matched.\n");
//     } else {
//         printf("Password did not match.\n");
//     }

//     return 0;
// }

// int main(){
//     printf("Hello,World" );
// }





 //write a function that takes in array of student hight(age,name,grade) of a student let the fuction return the average grade of the student create a sample array of that student structure and use that function to print out the average grade



struct Student {
    float height;
    int age;
    char name[50];
    float grade;
};


float calculateAverageGrade(struct Student students[], int count) {
    float total = 0.0;

    for (int i = 0; i < count; i++) {
        total += students[i].grade;
    }

    if (count == 0) {
        return 0.0; 
    }

    return total / count;
}

int main() {
    struct Student studentList[] = {
        {150.0, 16, "Alice", 85.0},
        {160.0, 17, "Bob", 90.0},
        {155.0, 16, "Charlie", 78.0},
        {165.0, 17, "Diana", 92.0}
    };

    int count = sizeof(studentList) / sizeof(studentList[0]);  

    float average = calculateAverageGrade(studentList, count);
    printf("The average grade of the students is: %.2f\n", average);

    return 0;
}

