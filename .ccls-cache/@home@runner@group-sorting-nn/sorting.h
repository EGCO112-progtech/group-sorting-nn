// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int a[], int n) {
  int i, j, m = a[0], mi = 0;
  for (i = j + 1; i < n; i++) {
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

display(data, length);
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
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (j = 1; j <= n - 1; j++) {

    display(a, n);
  }
}
