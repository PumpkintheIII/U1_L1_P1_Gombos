/*
  UB C Programming Unit 1 Lesson 2 Program 1
  Sum of Entered Numbers
  Max Gombos
  */

#include <stdio.h> //imports functions

int main(void) { //defines main function
  float num1, num2, num3, numSum;
  //Initialize variables used as float variables

  printf("Please enter a number: ");
  //asks user for the first number
  scanf("%f", &num1);
  //accepts the users input and formats it as a float
  getchar();
  //asks user for number
  printf("Please enter a number: ");
  //asks user for the second number
  scanf("%f", &num2);
  //accepts the users input and formats it as a float
  getchar();
  //asks user for number
  printf("Please enter a number: ");
  //asks user for the third number
  scanf("%f", &num3);
  //accepts the users input and formats it as a float
  getchar();
  //asks user for number

  //Code to find the sum of numbers:
  numSum = num1 + num2; //adds num1 and num2
  numSum += num3; //adds num3 to num1 and num2
  printf("Sum: %f", numSum); //prints the output
  return 0; //ends the program
}