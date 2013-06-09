/** Exercise 1-6
 * Verify that the expression getchar() != EOF is 0 or 1
 */
#include <stdio.h>

int main() {
  int c;
  int ans = 1;
  while(ans) {
    ans = ((c = getchar()) != EOF);
    if (ans != 0 && ans != 1) {
      printf("It is not 0 or 1. It is %d!\n", ans);
    }
  }
}
