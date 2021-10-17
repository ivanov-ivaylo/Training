#include <stdio.h>


int main()
{
  int i, j, k, n, r;
  
  printf("\nn = ");
  scanf("%d", &n);

  /*  printf("\nn is %d\n", n); */

  r = 0;

  for (i = 0; i <= n-2; i++)
    for (j = i+1; j <= n-1; j++)
      for (k = 0; k <= j; k++) {
	/* printf ("i = %d, j = %d, k = %d\n", i+1, j+1, k+1); */
	r ++;
      }

  printf("\nr is %d\n", r);

  printf("1/3 * n * (n - 1) * (n + 1) = %d\n", (n * (n-1) * (n + 1))/3);

  return 0;

}
