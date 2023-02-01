/*
  UB C Programming Unit 1 Lesson 2 Program 1
  Sum of Entered Numbers
  Max Gombos
  */

#include <stdio.h>

int main(void) {
  float num1, num2, num3, numSum;
  
  printf("Please enter a number: ");
  scanf("%f", &num1);
  getchar();
  printf("Please enter a number: ");
  scanf("%f", &num2);
  getchar();
  printf("Please enter a number: ");
  scanf("%f", &num3);
  getchar();

  numSum = num1 + num2;
  numSum += num3;
  printf("Sum: %f", numSum);
  return 0;
}