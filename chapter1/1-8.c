/** Exercise 1-8
 * Write a program to count blanks, tabs, and newlines.
 */
#include <stdio.h>

int main() {
  int c;
  int nblanks = 0;
  int ntabs = 0;
  int nlines = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nlines;
    if (c == ' ')
      ++nblanks;
    if (c == '\t')
      ++ntabs;
  }
  printf("Number of tabs: %d\n", ntabs);
  printf("Number of blanks: %d\n", nblanks);
  printf("Number of newlines: %d\n", nlines);
}
