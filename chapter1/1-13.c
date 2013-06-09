/** Exercise 1-12
 * Write a program  to print a histogram of the lengths of words in its
 * input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging.
 */
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
#define MAXLENGTH 31

int main()
{
  int c, state, wordlength;
  int wordlengths[MAXLENGTH];
  int i;
  for (i = 0; i < MAXLENGTH; ++i)
    wordlengths[i] = 0;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      if (state == IN) {
        // end of word
        ++wordlengths[wordlength];
      }
      state = OUT;
    }
    else {
      if (state == OUT) {
        // start of new word
        wordlength = 0;
      }
      state = IN;
      ++wordlength;
    }
  }
  for (i = 1; i < MAXLENGTH; ++i) {
    printf("%2d ", i);
    int j;
    for (j = 0; j < wordlengths[i]; j++)
      printf("=");
    printf("\n");
  }

}
