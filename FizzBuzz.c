// FizzBuzz.c
// This program prints the numbers from a specified small integer to a
// larger one
// CONDITIONS
// If a number is devisible by 3 then print Fizz
// If a number is devisible by 5 then print Buzz
// If a number is devisible by both 3 and 5 then print FizzBuzz

#include <stdio.h>

int main()
{
  int num1 = 0, num2 = 0, counter = 0;

  // introduction
  printf("\nWelcome to the FizzBuzz Program.\nThis program prints the \
numbers from input 1 to input 2\n");
  printf("\nIf a number is divisible by both 3 and 5, then display FizzBuzz\
\nIf a number is divisible by 3, then display Fizz\
\nIf a number is divisible by 5, then display Buzz\n");
  
  printf("\nEnter the first number: ");
  scanf("%d", &num1);
  printf("\nEnter the second number: ");
  scanf("%d", &num2);
  
  // The FizzBuzz

  #if(num1 <= num2)
    {
#define decision <=
#define step +1
      int exchange = num1;
      num1 = num2;
      num2 = exchange;
    }
   #endif

  #if(num1 >= num2)
    {
#define decision >=
#define step -1
    }
  #endif

  if(num1 == num2)
    return 0; // end if the numbers are the same

  
  for(counter = num1; counter decision  num2; counter += step)
  {
    if( counter % 15 == 0)
      printf("Fizzbuzz");
    else if( counter % 3 == 0)
      printf("Fizz");
    else if( counter % 5 == 0)
      printf("Buzz");
    else
      printf("%d", counter);

    printf("\n");
  }

  printf("\nThanks");
  return 0;
} 
