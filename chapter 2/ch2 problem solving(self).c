// in this code i will solve some questions which is writen by me or chatgpt
// Instructions:
// 1. This file contains multiple C programs.
// 2. To run a program, uncomment only that program.
// 3. Keep all other programs commented.
// 4. Save the file before running.


//program number 1
// Question

// Write a C program that:

// Takes two integers as input from the user.
// Prints only their sum.

// #include <stdio.h>

// int main(){
//     int first_number;
//     printf("enter the first number");
//     scanf("%d", &first_number);
//     int second_number;
//     printf("enter the second number");
//     scanf("%d", &second_number);
//     printf("the sum of two numbers %d and %d is : %d", first_number, second_number, first_number + second_number); // Number of %d and variables in printf() must be the same.
//     return 0;
    
// }

// after a single mistake this program is executed successfully
//and the 1st program is between line 17-29



//program number 2
// Question

// Write a C program that:

// Takes two integers as input from the user.
// Prints:
// Sum
// Difference
// Product

// #include <stdio.h>

// int main(){
//     int first_number;
//     printf("enter the first number(only integer) : ");
//     scanf("%d", &first_number);
//     int second_number;
//     printf("enter the second number (only integer) : ");
//     scanf("%d", &second_number);
//     printf("the sum of %d and %d is : %d\n", first_number, second_number, first_number + second_number);
//     printf("the difference of %d and %d is : %d\n", first_number, second_number, first_number - second_number);
//     printf("the product of %d and %d is : %d\n", first_number, second_number, first_number * second_number);

//     return 0;
// }

// without any mistake this program is executed successfully
//and the 2nd program is between line 47-61



//program number 3
// Question
// Write a C program that:

// Takes three integers as input.
// Store their sum in a variable named sum.
// Store their product in a variable named product.
// Print both values.

// #include <stdio.h>

// int main(){
//     int first_number;
//     printf("enter first number");
//     scanf("%d", &first_number);
//     int second_number;
//     printf("enter second number");
//     scanf("%d", &second_number);
//     int third_number;
//     printf("enter third number");
//     scanf("%d", &third_number);
//     int sum = first_number + second_number + third_number;
//     int product = first_number * second_number * third_number;
//     printf("sum of all numbers is : %d\n", sum);
//     printf("product of all numbers is : %d\n", product);

//     return 0;
// }

// without any mistake this program is executed successfully
//and the 3rd program is between line 77-95



//program number 4
// Question

// Write a C program that:

// Takes four integers as input.
// Stores:
// Their sum
// Their average (integer average hi chalega, abhi float average ki zarurat nahi)
// Print both values.

// #include <stdio.h>

// int main(){
//     int first_number;
//     printf("Enter first number :");
//     scanf("%d", &first_number);
//     int second_number;
//     printf("Enter second number :");
//     scanf("%d", &second_number);
//     int third_number;
//     printf("Enter third number :");
//     scanf("%d", &third_number);
//     int forth_number;
//     printf("Enter fourth number :");
//     scanf("%d", &fourth_number);
//     int sum = first_number + second_number + third_number + fourth_number;
//     int average = sum/4;
//     printf("the sum of %d, %d, %d and %d is : %d\n", first_number, second_number, third_number, fourth_number, sum);
//     printf("the average of %d, %d, %d and %d is : %d\n", first_number, second_number, third_number, fourth_number, average);

//     return 0;
// }

// without any mistake this program is executed successfully
//and the 3rd program is between line 113-134



//program number 5
// Question
// ============================================================================
// PROGRAM NUMBER 5
// Difficulty : ★★☆☆☆
// Topic : Variables, Data Types, Input, Output, Arithmetic Operators
// ============================================================================

// Question

// Write a C program that creates a simple Student Result Sheet.

// -----------------------------------------------------------------------------
// STEP 1 : Take Input
// -----------------------------------------------------------------------------

// Take the following details from the user:

// • First Letter of Student's Name (char)
// • Roll Number (int)
// • Class (int)
// • Section (char)

// • Physics Marks (int)
// • Chemistry Marks (int)
// • Mathematics Marks (int)
// • English Marks (int)
// • Computer Marks (int)

// -----------------------------------------------------------------------------
// STEP 2 : Perform Calculations
// -----------------------------------------------------------------------------

// Create separate variables and calculate:

// • Total Marks
// • Average Marks (integer average)
// • Percentage (Out of 500)

// -----------------------------------------------------------------------------
// STEP 3 : Display Result
// -----------------------------------------------------------------------------

// Print a well-formatted report like this:

// ================================================
//            STUDENT RESULT SHEET
// ================================================
//
// Student Information
// ------------------------------
// First Letter : D
// Roll Number  : 1205
// Class        : 12
// Section      : A
//
// Academic Information
// ------------------------------
// Physics      : 91
// Chemistry    : 87
// Mathematics  : 95
// English      : 84
// Computer     : 96
//
// Result
// ------------------------------
// Total Marks      : ___
// Average Marks    : ___
// Percentage       : ___
//
// ================================================

// -----------------------------------------------------------------------------
// Rules
// -----------------------------------------------------------------------------

// ✓ Use meaningful variable names.
// ✓ Store every calculation in a separate variable.
// ✓ Use proper indentation.
// ✓ Use comments to separate different sections.
// ✓ Do NOT use if-else, loops, arrays or functions.
// ✓ Make the output clean and professional.

// ============================================================================
// End of Question
// ============================================================================

// #include <stdio.h>

// int main(){
//     //student's iformation
//     char first_letter_of_name;
//     printf("Enter the first letter of your name : ");
//     scanf("%c", &first_letter_of_name);
//     int roll_number;
//     printf("Enter your roll munber : ");
//     scanf("%d", &roll_number);
//     int class;
//     printf("Enter your class : ");
//     scanf("%d", &class);
//     char section;
//     printf("Enter your section : ");
//     scanf(" %c", &section);
//     //Academic Information
//     int physics_marks;
//     printf("Enter your marks of physics out of 100 : ");
//     scanf("%d", &physics_marks);
//     int chemistry_marks;
//     printf("Enter your marks of chemistry out of 100 : ");
//     scanf("%d", &chemistry_marks);
//     int mathematics_marks;
//     printf("Enter your marks of mathematics out of 100 : ");
//     scanf("%d", &mathematics_marks);
//     int english_marks;
//     printf("Enter your marks of english out of 100 : ");
//     scanf("%d", &english_marks);
//     int computer_marks;
//     printf("Enter your marks of computer out of 100 : ");
//     scanf("%d", &computer_marks);
//     //perform calculations
//     int total_marks = physics_marks + chemistry_marks + mathematics_marks + english_marks +computer_marks;
//     int average = total_marks/5;
//     int percentage = (total_marks * 100) / 500;
//     //display result
//     printf("================================================\n");
//     printf("              STUDENT RESULT SHEET              \n");
//     printf("================================================\n");
//     printf("----------------------------------\n");
//     printf("Student Information\n");
//     printf("----------------------------------\n");
//     printf("First letter  : %c\n", first_letter_of_name);
//     printf("Roll number   : %d\n", roll_number);
//     printf("Class         : %d\n", class);
//     printf("Section       : %c\n", section);
//     printf("----------------------------------\n");
//     printf("Academic Information\n");
//     printf("----------------------------------\n");
//     printf("Physics       : %d\n", physics_marks);
//     printf("Chemistry     : %d\n", chemistry_marks);
//     printf("Mathematics   : %d\n", mathematics_marks);
//     printf("English       : %d\n", english_marks);
//     printf("Computer      : %d\n", computer_marks);
//     printf("----------------------------------\n");
//     printf("Result\n");
//     printf("----------------------------------\n");
//     printf("Total Marks   : %d\n", total_marks);
//     printf("Average Marks : %d\n", average);
//     printf("Percentage    : %d\n",percentage);
//     printf("================================================\n");

//     return 0;
// }

// without any mistake this program is executed successfully
//and the 4th program is between line 228-292
