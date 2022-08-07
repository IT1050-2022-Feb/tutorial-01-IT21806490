/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n,i;//Variable declaration
  double sum;//Variable declaration
  
  printf("Input n :- ");//Input number
  scanf("%d", &n);

  for(i = 1; i <= n; i++)//Beginning of for loop
  {
    sum = sum + i;//Calculate the sum
  }//End of for loop

  printf("sum = %.2f", sum);//Print the sum
  return 0;
}

