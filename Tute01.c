/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float sub1,sub2,avg;//Variable declaration
 
  printf("Input Subject 1 mark :- ");//Input Values
  scanf("%f", &sub1);

  printf("Input Subject 2 mark :- ");//Input Values
  scanf("%f", &sub2);

  avg = (sub1 + sub2) / 2;//Calculate the avarage
  printf("Avarage mark is %.2f" , avg);//Print results
  return 0;
}

