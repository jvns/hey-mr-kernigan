/** Exercise 1-14
 * Write a program  to print a histogram of the frequencies of different
 * characters in its output
 */
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define NCHARS 256

int main()
{
  int c;
  int charfreqs[NCHARS];
  int i;
  for (i = 0; i < NCHARS; ++i)
    charfreqs[i] = 0;

  while ((c = getchar()) != EOF) {
    ++charfreqs[c];
  }
  for (i = 0; i < NCHARS; ++i) {
    if (charfreqs[i] != 0) {
      putchar(i);
      printf(": ");
      int j;
      for (j = 0; j < charfreqs[i]; j++)
        printf("=");
      printf("\n");
    }
  }

}
