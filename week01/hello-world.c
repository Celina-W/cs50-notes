// #include = hey, include this functionality!
// stdio = standard input and output
// .h = header file
#include <stdio.h>
#include <cs50.h>

// tell main that this function exists
int square(int n);

// main = main part of your program that runs
int main(void)
{

  // printf = a FUNCTION that prints to the console
  // "hello, world\n" = a STRING = a bunch of CHARACTERS put together
  // "\n" = line break
  printf("hello, world\n");

  // a WHILE LOOP will run based on a BOOLEAN in parentheses
  // this one will not run
  while (false)
  {
    printf("hello, world\n");
  }

  // a FOR LOOP can have a counter that loops through a set number of times
  // this one will run 50 times:
    // int i = initialization
    // i < 50 = BOOLEAN EXPRESSION - if it is true, the inside code will run
    // i++ = increment i - before checking the boolean again
  for (int i = 0; i < 50; i++)
  {
    printf("hello, world\n");
  }

  // a bunch of CONDITIONALS
  // only one of these will run:
    // if the first BOOLEAN is true, run
    // if the first BOOLEAN is false, check the second BOOLEAN
    // if the second BOOLEAN is true, run
    // if the second BOOLEAN is false, run the else statement
  int x = 1;
  int y = 2;

  if (x < y)
  {
    printf("x is less than y\n");
  }
  else if (x > y)
  {
    printf("x is greater than y\n");
  }
  else
  {
    printf("x is equal to y\n");
  }

  // variable with data type string (NOT A REAL DATA TYPE, USING CS50 LIBRARY)
  // stores user input from a function (also from the cs50 library)
  // %s = insert string variable data from data arguments listed after the comma
  string s = get_string("Name: ");
  printf("hello, %s\n", s);

  // variable with data type integer stores user input through a function
  // %i = insert integer variable data from data arguments listed after the comma
  int i = get_string("Integer: ");
  printf("hello, %i\n", i);

  // perform arithmetic
  // + is addition, - is subtraction
  // * is multiplication, / is division
  // % is modular arithmetic, or finding the remainder
  // note: all quotients of integer division will have their decimals truncated
  printf("%i plus %i is %i\n", x, y, x + y);
  printf("%i minus %i is %i\n", x, y, x - y);
  printf("%i times %i is %i\n", x, y, x * y);
  printf("%i divided by %i is %i\n", x, y, x / y);
  printf("remainder of %i divided by %i is %i\n", x, y, x % y);

  // using floats will allow you to have decimal answers
  // %.10f = print answer with ten decimal places
  float q = get_float("Float: ");
  float r = get_float("Float: ");
  printf("%f divided by %f is %,10f\n", q, r, q / r);

  // CHARACTERS are always in single instead of double quotes
  // || = or
  char c = get_char("Answer: ");
  if (c == 'y' || c == 'Y')
  {
    printf("Yes\n");
  }
  if (c == 'n' || c == 'N')
  {
    printf("No\n");
  }

  // switch = takes in an input
  // case = if the input is equal to the case, execute all code below
  // break = finish executing code
  switch (c)
  {
    case 'y':
    case 'Y':
      printf("yes\n");
      break;
    case 'n':
    case 'N':
      printf("no\n");
      break;
  }

  // calls our function square below and prints it
  printf("%i\n", square(y));

  // answer is not actually 0.1 -- it's imprecise because of finite memory
  // later decimal places are random numbers because we can't fit zeros everywhere
  printf("%.55f\n", 1.0 / 10.0);
}

// defining a function that takes in an integer and returns its square
int square(int n)
{
  return n * n;
}
