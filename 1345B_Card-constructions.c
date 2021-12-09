#include <stdio.h>
 
int max_level(int count, int w){
  int sum = 0, i;
  for (i = 1; i <= count; i++) sum += 3*i - 1;
  if (sum > w) return count - 1;
  else return max_level(count+1, w);
}
int main(void) {
  int w, i, x;
  int t;
  scanf("%d", &t);
  while (t--){
    int s = 0;
    scanf("%d", &w);
    while(w){
      x = max_level(1, w);
      if( x==0 ) break;
      else{
        int sum = 0;
        for (i = 1; i <= x; i++) sum += 3*i - 1;
        w -= sum;
      }
      s++;
    }
    printf("%d\n", s);
  }
}