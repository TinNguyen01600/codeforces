#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	long long int n, i, t, c = 0;
    scanf("%lld", &t);
    while (t--){
        scanf("%lld", &n);
        for (i=1; i<64; i++){
            if (pow(2,i) == n) {break;}
        }
        if(i<64) printf("NO\n");
        else printf("YES\n");
    }
    
}