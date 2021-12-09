#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int t, i, c=0, sum = 0;
    scanf("%d", &t);
    long  int *ptr;
    ptr = (long  int*) malloc(t * sizeof(long  int));
    for (i = 0; i < t; ++i) scanf("%ld", ptr + i); 
    for (i = 0; i < t; ++i){
        if(*(ptr+i) % 2 == 0) c++;
        sum += *(ptr+i);
    }
    if(sum % 2 == 1 || c != t) printf("First");
    else printf("Second");
}