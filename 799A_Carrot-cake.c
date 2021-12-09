#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int n, t, k, d;
    scanf("%d %d %d %d", &n, &t, &k, &d);
    if(n < k) printf("NO");
    else {
        int time = (n % k == 0) ? n/k*t : (n/k + 1) * t;
        if ((d + t) < time) printf("YES");
        else printf("NO");
    }
}