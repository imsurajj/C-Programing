// Program on the Switch Operator

#include <stdio.h>
#include <conio.h>
int main()
{
   int a, b, n, sum = 0, sub = 0, product = 0, divide = 0;
   printf("Enter the choice you want \n");
   printf("1. Addition \n");
   printf("2. Substraction \n");
   printf("3. Multiplication \n");
   printf("4. Division \n");
   scanf("%d", &n);
   printf("enter the two numbers :");
   scanf("%d %d", &a, &b);

   switch (n)
   {
   case 1:
      sum = a + b;
      printf("Addition of %d and %d is %d", a, b, sum);
      break;

   case 2:
      sub = a - b;
      printf("Substraction of %d and %d is %d", a, b, sub);
      break;

   case 3:
      product = a * b;
      printf("Multiplication of %d and %d is %d", a, b, product);
      break;

   case 4:
      divide = a / b;
      printf("Division of %d and %d is %d", a, b, divide);
      break;
   }

   getch();
   return 0;
}