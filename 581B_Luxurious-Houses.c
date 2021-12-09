#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

long  int max(int n, long  int a[], int size){
  long  int max = 0, i;
  for (i = n; i<size; i++){
    if(a[i] > max) max = a[i];
  }
  return max;
}

int main(){
    int t, i;
    scanf("%d", &t);
    long  int *ptr;
    ptr = (long  int*) malloc(t * sizeof(long  int));
    for (i = 0; i < t; ++i){
      scanf("%ld", ptr + i);
    }
    long  int m = max(0, ptr, t);
    for(i = 0; i<t; ++i){
        if (*(ptr + i) == m){
            long m1 = max(i+1, ptr, t);   
            if (m1 == m) printf("1 ");
            else printf("0 "); m = m1;
        }
        else printf("%ld ", m + 1 - *(ptr + i));
    }   
}