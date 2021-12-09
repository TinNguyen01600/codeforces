#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>


int check_8(long long int n){
  if ((n) % 10 == 8) return 1;
  if (n == 0) return 0;
  else return check_8(n/10);
}

int main(){
    long long int a;
    int i;
    scanf("%lld", &a);

    for (i = 1; i<17; i++){
      if (check_8(abs(a+i)) == 1){
        printf("%d", i);
        break;
      }
    }
}