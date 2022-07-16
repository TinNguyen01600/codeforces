#include <stdio.h>
#include <string.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int n,k1,k2,w,b,trangthua,trangtrong, vientrang;
    scanf("%d %d %d",&n,&k1,&k2);
    scanf("%d %d", &w, &b);
    
    if ((w <= (k1+k2)/2) && (b <= (2*n-(k1+k2)) / 2)){
      printf("Yes\n");
    }
    else printf("no\n");
  }
  return 0;
} 