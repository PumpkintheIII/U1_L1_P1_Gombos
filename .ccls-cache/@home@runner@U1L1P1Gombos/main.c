/*
  UB C Programming Unit 1 Lesson 2 Program 1
  Max Gombos
  */

#include <stdio.h>

int main(void) {
  int num1, num2, num3, numSum;
  
  printf("Please enter a number: ");
  scanf("%d", &num1);
  getchar();
  printf("Please enter a number: ");
  scanf("%d", &num2);
  getchar();
  printf("Please enter a number: ");
  scanf("%d", &num3);
  getchar();

  numSum = num1 + num2;
  numSum += num3;
  printf("Sum: %d", numSum);
  return 0;
}