#include <stdio.h>

int main(int argc, char const *argv[])
{
  int input;

  printf("Choose one of the following operations:\n");
  printf("Add (1)\n");
  printf("Subtract (2)\n");
  printf("Multiply (3)\n");
  printf("Divide (4)\n");
  printf("Stop program (-1)\n");

  do
  {
    printf("Enter your choice: ", );
    scanf(input);

    if((input > 0) || (input < 5))
    {
      getOperators(&input);
    }

    else if(input == -1)
    {

    }

    else
    {
      printf("Input not allowed, please try again\n", );
    }
  }
  while((input == 0) || (input < -1) || (input > 4));

  return sum;
}

double getOperators(int input)
{
  double num1 = 0;
  double num2 = 0;
  double sum = 0;

  printf("Please enter your first operand: ");
  scanf("%s", num1);

  printf("Please enter your second operand: ");
  scanf("%s", num2);

  if(input == 1)
  {
    sum = num1 + num2;
    return sum;
  }
}
