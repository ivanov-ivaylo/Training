#include <stdio.h>
#define Array_Length 100

void Print_Array(int A[], int thelength)
{
  int i;
  printf("\n");
  for (i = 0; i < thelength; i++)
    printf("%d ", A[i]);
  printf("\n");
}

void Selection_Sort(int A[], int thelength)
{
  int i, j, k, temp;

  for (i = 0; i < thelength - 1; i++) {
    printf ("\nNow i is %d", i);
    temp = A[i];
    for (j = i + 1; j < thelength; j++) {
      if (temp > A[j]) {
	temp = A[j];
	k = j;
      }
    }
    temp = A[i];
    A[i] = A[k];
    A[k] = temp;
  }
}

int main()
{
  int A[Array_Length];
  int length;
  
  printf("\nInput:\n");
  for (length = 0; length < Array_Length; length++) {
    scanf("%d", &(A[length]));
    if (A[length] == 0) break;
  }

  printf("\nLength: %d\n", length);

  Print_Array(A, length);

  Selection_Sort(A, length);

  Print_Array(A, length);

  return 0;}
