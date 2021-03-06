/** Exercise 1-3
 *
 * Modify the Fahrenheit-Celsius program to have a heading to the table.
 */
#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("Fahrenheit | Celsius\n");
  printf("-----------|--------\n");
  while(fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf(" %3.0f       |%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
