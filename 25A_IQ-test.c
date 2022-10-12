#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
  int n; scanf("%d", &n);
  int arr[n];
  int count_even = 0, count_odd = 0;
  int pos_even, pos_odd;
  for (int i = 0; i<n; i++){
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0){
      count_even++;
      pos_even = i;
    }
    else{
      count_odd++;
      pos_odd = i;
    }
  }

  int result = (count_even == 1) ? pos_even : pos_odd;
  printf("%d\n", result + 1);
}