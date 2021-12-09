#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int min(long long int a,long long int b);

int main(){
	long long  int t, p, a, b, c;
    scanf("%lld", &t);
    while (t--){
        scanf("%lld %lld %lld %lld", &p, &a, &b, &c);
        long long int out1 = (p%a == 0) ? 0 : (a-(p%a));
        long long int out2 = (p%b == 0) ? 0 : (b-(p%b));
        long long int out3 = (p%c == 0) ? 0 : (c-(p%c));
        printf("%lld\n", min(out1, min(out2, out3)));
    }
}

long long int min(long long int a, long long int b){
    return (a<b) ? a : b;
}


