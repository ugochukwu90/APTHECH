#include<stdio.h>
// int main(){
//        int i = 1, sum= 0;
//        while (i <=5){
//         sum += i;
//         i++;
//        }
//        printf("sum of first five integers:%d/n",sum);
//        return 0;
// }
// int main(){
//     int n = 5;
//     for (int i = 0; i <= 10; i++)
//     {
//         if (i==6)
//         {
//             printf("ohh Nightmare!!! I IS %d/n",i);
//             break;
//         }
        
//         if (i==6)
//         {
//             printf("ohh Nightmare!!! I IS %d/n",i);
//             break;
//         }
        
//     }
    
// }
#include <stdio.h>
#include <stdbool.h>

// int main() {
//     for (int num = 1; num <= 20; num++) {
//         if (num > 1) {
//             bool is_prime = true;
//             for (int i = 2; i * i <= num; i++) {
//                 if (num % i == 0) {
//                     is_prime = false;
//                     break;
//                 }
//             }
//             if (is_prime) {
//                 printf("%d\n", num);
//             }
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             printf("First even number : %d\n", arr[i]);
//            // break;
//         }
        
//     }
//     return 0;
// }


// int main (){
//   int n =1;
//   int e =2;
//   for (int i = 0; i <=12; i++)
//   {
//     printf("%d * %d = %d\n",n,i,n*i);
//   }
  
//   for (int i = 0; i <=12; i++)
//   {
//     printf("%d * %d = %d\n",e, i,e*i);
//   }
  

// }


  // int main(){
  //   int marks[4]={89,76,90,95};
  //   printf("the marks are: %d,%d,%d,%d",marks[0], marks[2],marks[3]);
  // }


 
    // int numbers[5] = {1, 2, 3, 4, 5};
    // int sum = 0;
    // for (int i = 0; i <=4; i++)
    // {
    //     sum += numbers[i];

    // }
    // printf("The total sum: %d\n", sum);
//     int scores[5]={49,50,78,80,10};
//     int passcount = 0;

//     for (int i = 0; i < 5; i++)
//     (
//       if (scores[i]>=50)
//       {
//       pass_count += 1;
//       }
      
//     )
//     printf("%d Students passed the course\n" , pass_count);
   
// 
#include <stdio.h>  

// int main() {
//     int matrix[2][3] = {  
//         {1, 2, 3},        
//         {4, 5, 6}
//     };
    
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {  
//             printf("%d ", matrix[i][j]);  
//         }
//         printf("\n");
//     }
//     return 0;
// }




  //   main(){
  //    int arr[5];
  //    printf("Enter value of the Array");
  //    printf("the marks are: %d,%d,%d,%d",arr[4], arr[3],arr[2], arr[1],arr[0] );
  //    printf("The values of the Array");
  //    printf("the marks are: %d,%d,%d,%d",arr[4], arr[3],arr[2], arr[1],arr[0] );
  //    return 0;
  //  }int

    // int power(int base,int exp){
    //   int result = 1;
    //   for (int i = 0; i < exp; i++)
    //   {
    //     result *= base;
    //   }
    // }
    // int main(){
    //   int result = power(2,3);
    //   printf("2^3=%d/n",result);//output:2^3=
    //   return 0;
    // }

    #include <stdio.h>
    // int power(int base, int exp) {
    // int result = 1;
    // for (int i = 0; i < exp; i++) {
    // result *= base;
    // }
    // return result;
    // }
    // int main() {
    // int result = power(2, 3);
    // printf("2^3 = %d\n", result); // Output: 2^3 = 8
    // return 0;
    // }

    #include <stdio.h>

// float circleArea(float radius) {
//     float pi = 3.14;
//     float area = pi * radius * radius;
//     return area;
// }

// int main() {
//     float radius;
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);

//     float area = circleArea(radius);
//     printf("The area of the circle is: %.2f\n", area);

//     return 0;
// }


// int main(){
//   int num = 24;
//   int *ptr = &num;
//   printf("Address of num: %p\n", ptr);
//   printf("Value at ptr: %d\n", *ptr);
//   *ptr = 20;
//   printf("New value of num: %d\n", num);
//   return 0;
// }


//   int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *ptr = arr; 
//     for (int i = 0; i < 5; i++) {
//         printf("Element %d: %d\n", i, *(ptr + i));
//     }
//     return 0;
// }
// struct Student {
//   int rollNo;
//   char name[20];
//   };
//   int main() {
//   struct Student s1 = {101, "Alice"};
//   struct Student *ptr = &s1;
//   printf("Roll No: %d, Name: %s\n", ptr->rollNo, ptr->name);
//   return 0;
//   }
  //creat a structure of books that takes books name and page number then use pointers to print out the

  // struct Books {
  //   int PageNo;
  //   char bookname[10];
  //   };
  //   int main() {
  //   struct Books s1 = {100, "the good boy"};
  //   struct Books *ptr = &s1;
  //   printf("Page No: %d, book Name: %s\n", ptr->PageNo, ptr->bookname);
  //   return 0;
  //   }

  // int main() {
  //   int arr[5] ;
  //   int *ptr = arr; 

  //   for (int i = 0; i < 5; i++)
  //   {
  //     printf("element %d = ",i);
  //     scanf("%d",*(ptr + i));
  //   }
    
  //   int sum=0;
  //   for (int i = 0; i < 5; i++) {
  //       sum+=*(ptr + i);
  //   }
  //   printf("sum = %d",sum);
  //   return 0;
  // }
  
  /*
  *START
  *prompt users to enter numbers
  *Read those numbers
  *Multiply the  two numbers
  *print the multiplication out
  *End
  *

  */


    /*

     */
    //  #include <string.h>
    //   #include <stdio.h>

    //  struct Book
    //  {
    //     char title[50];
    //     char author[50];
    //     float price;
    //  };
    //   int main()
    //   {
    //       struct Book myBook;

    //       strcpy(myBook.title, "The  song of ice and fire");
    //       strcpy(myBook.author, "Ugochukwu");
    //       myBook.price = 500000.00;
          
    //      puts(myBook.title);
    //      scanf("%s", myBook.title);

    //      puts(myBook.author);
    //       scanf("%s", myBook.author);

    //      printf(" %f\n", myBook.price);
    //       scanf("%f", &myBook.price);
    //   }


      //  #include <stdio.h>
      //   #include <string.h>
      //   struct Employee
      //   {
      //     char name[50];
      //     int emp_id;
      //     float salary;
      //   };
      //   void displayEmployee(struct Employee emp)
      //   {
      //     printf("Employee ID: %d\n", emp.emp_id);
      //     printf("Employee Name: %s\n", emp.name);
      //     printf("Employee Salary: %.2f\n", emp.salary);
      //   }
      //   int main()
      //   {
      //     struct Employee emp1,emp2;
          
      //     emp1.emp_id = 001;
      //     strcpy(emp1.name, "Ugochukwu");
      //     emp1.salary = 50000000.00;

        
      //     emp2.emp_id = 002;
      //     strcpy(emp1.name, "wekend");
      //     emp1.salary = 70000000.00;

      //   //   printf("Employee ID: %d\n", emp1.emp_id);
      //   //   printf("Employee Name: %s\n", emp1.name);
      //   //   printf("Employee Salary: %.f\n", emp1.salary);

      //   //  printf("Employee ID: %d\n", emp2.emp_id);
      //   //   printf("Employee Name: %s\n", emp2.name);
      //   //   printf("Employee Salary: %.f\n", emp2.salary);

        
      //   }

       


#include <stdio.h>
 
// typedef struct {
//     int id;
//     float greade;
// } student;
// void upgrade(student *s,float by) {
//     s->greade += by;
    
// }

// int main() {
//     student s1 = {1, 75.0};
//     printf("Before upgrade: ID = %d, Grade = %.2f\n", s1.id, s1.greade);
    
//     upgrade(&s1, 5.0);
    
//     printf("After upgrade: ID = %d, Grade = %.2f\n", s1.id, s1.greade);
    
//     return 0;
// }







