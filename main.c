#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc,char **argv) {
  int i,*a,N,j=0;
  N= argc-2;
  a=(int *)malloc(sizeof(int)*N);
  for(i=0;i<N;i++)
    {
      a[i]=atoi(argv[i+2]);
    }

  display(a,N);
  //bubbleSort(a,N); 
  //insertion(a,N);

  selectionSort(a,N);
  display(a,N);
 return 0;
}


