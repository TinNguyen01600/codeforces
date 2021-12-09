#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(){
    int t, x, y, z;
    int sum_x = 0, sum_y = 0, sum_z = 0;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d %d", &x, &y, &z);
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) printf("YES");
    else printf("NO");
}