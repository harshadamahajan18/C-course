#include<stdio.h>

int main(){
  printf("Hello");
  return 0;
}

// Explanation
// #include<stdio.h>

// This line includes the Standard Input Output header file. The stdio.h header file contains definitions for input and output functions such as printf and scanf.
// #include is a preprocessor directive that tells the compiler to include the contents of the stdio.h file.
// int main()

// This defines the main function of the program. The execution of every C program starts from the main function.
// int indicates that the function returns an integer value.
// { and }

// These curly braces define the beginning and the end of the main function. All the code inside these braces is part of the main function.
// printf("Hello");

// printf is a standard library function that sends formatted output to the console.
// The string "Hello" is passed as an argument to printf, so it will be printed to the console when the program runs.
// The semicolon (;) at the end of the line marks the end of the statement.
// return 0;

// This statement ends the main function and returns the value 0 to the operating system.
// Returning 0 typically indicates that the program executed successfully.
// In C, the main function must return an integer, and return 0 is a conventional way to signal successful completion.
// Summary
// This program includes the necessary library for input and output functions, defines the main entry point of the program, prints the string "Hello" to the console, and then terminates successfully by returning 0.