// selection sort function module in C
#include <stdio.h>

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void selection(int a[], int n) {
  int i, j, m = a[0], mi = 0;
  for (j = 0; j < n - 1; j++) {
    m = a[j];
    mi = j;
    for (i = j + 1; i < n; i++) {
      if (m < a[i]) {
        m = a[i];
        mi = i;
      }
    }
    swap(&a[j], &a[mi]);
    display(a, n);
    printf("\n");
  }
}

void insertion(int a[], int n) {
  int i, j;
  for (j = 1; j < n; j++) {
    int value = a[j];
    for (i = j - 1; i >= 0; i--) {
      if (value < a[i])
        break;
      else
        a[i + 1] = a[i];
      display(a, n);
    }
    a[i + 1] = value;
    display(a, n);
    printf("\n");
  }
  printf("\n");
}

void bubblesort(int a[], int n) {

  int i, j;
  int sorted;
  for (i = n - 1; i > 0; i--) {
    sorted = 0;
    for (j = 0; j < i; j++) {
      if (a[j] < a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    printf("\n");
  }
}