#include <stdio.h>
int main(){
	int a[1000][3];
	int n,i,j;
  int p = 0, sum = 0;
	scanf("%d",&n);
  for(i=0; i<n; i++){
		for(j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
  for (i = 0; i < n; i++){
    for (j = 0; j < 3; j++){
      if (a[i][j] == 1) p++;
    }
    if (p>=2) sum++;
    p=0;
  }
  printf("%d", sum);
}