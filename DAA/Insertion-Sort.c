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

void Insertion_Sort(int A[], int thelength)
{
  int i, j, key;

  for (j = 1; j < thelength; j++) {
    key = A[j];
    i = j - 1;
    while (i >= 0 && A[i] > key) {
      A[i + 1] = A[i];
      i --; }
    A[i + 1] = key;
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

  Insertion_Sort(A, length);

  Print_Array(A, length);

  return 0;}
