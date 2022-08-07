/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1 , int no2);//Function declarations
int maximum(int no1 , int no2);//Function declarations
int multiply(int no1 , int no2);//Function declarations

int main() 
{
   int no1, no2, minimum, maximum, multiply;//Variable declaration
   
   printf("Enter a value for no 1 : ");//Input no 1
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");//Input no 2
   scanf("%d", &no2);
   
   minimum = minimum(no1,no2);//Call minimum function
   maximum = maximum(no1,no2);//Call maximum function
   multiply = multiply(no1,no2);//Call multiply function
   
   printf("%d ", minimum);//Output of minimum no
   printf("%d ", maximum);//Output of maximum no
   printf("%d ", multiply);//Output of multiply
   return 0;
}
   
int minimum(int no1 , int no2)//Start minimum function
    {
       return (no1 > no2 ) ? no1 : no2;//Calculate minimum no
    }
int maximum(int no1 , int no2)//Start maximum no
   {
       return (no1 > no2 ) ? no2 : no1;//Caculate maximum no
   }
int multiply(int no1 , int no2)//Start multiply function
   }
       return multiply = no1 * no2;//Calculate the multiply
   }
   
  
