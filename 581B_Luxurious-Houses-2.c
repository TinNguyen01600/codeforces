#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int t, i;
    scanf("%d", &t);
    long  int *ptr;
    ptr = (long  int*) malloc(t * sizeof(long  int));
    for (i = 0; i < t; ++i){ scanf("%ld", ptr + i); }
    long  int *output;
    output = (long  int*) malloc(t * sizeof(long  int));
    *(output + t-1) = 0;
    long int max = *(ptr + t-1);
    for(i = t-2; i >= 0; i--){
      if (*(ptr+i) > max) {
        max = *(ptr + i); 
        *(output + i) = 0;
      }
      else *(output + i) = max + 1 - *(ptr + i);
    }
    for(i = 0; i<t; i++){
      printf("%ld ", *(output + i));
    }
}