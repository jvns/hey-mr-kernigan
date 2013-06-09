/** Exercise 1-4
 *
 * Write a program to print the corresponding Celsius-Fahrenheit table
 */
#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = -30;
  upper = 100;
  step = 10;

  celsius = lower;

  printf("Celsius | Fahrenheit\n");
  printf("--------|-----------\n");
  while(celsius <= upper) {
    fahr = (9.0 / 5.0 * celsius) + 32.0;
    printf(" %3.0f    |   %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
