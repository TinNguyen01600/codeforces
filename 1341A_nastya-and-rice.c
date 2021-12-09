#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(){
    int t, n, a, b, c, d;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
        int min_g = (a - b) * n, max_g = (a + b) * n;
        int min_p = c - d, max_p = c + d;       
        if ((min_g > max_p) || (min_p > max_g)) printf("NO \n");
        else printf("YES \n");
    }
}
