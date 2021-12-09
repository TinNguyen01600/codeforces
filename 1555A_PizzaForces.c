#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
  long int t;
  scanf("%ld", &t);
 
  while(t--)
  {
    long long int n; scanf("%lld", &n);
    long long int s;
    int m = 0,l = 0;
    if (n <= 6){s = 1;}
    else{
      int r = n%6;
      long long int d = n/6;
      switch (r)
      {
        case 0:
          s = d;
          break;
        case 1:
        case 2:
          s = d-1; m++;
          break;
        case 3:
        case 4:
          s = d-1; l++;
          break;
        case 5:
          s = d+1;
          break;
      }
    }
    //printf("%d %d %d", s, m, l);
    long long int t = s*15 + m*20 + l*25;
    printf("%lld \n", t);
  }
}