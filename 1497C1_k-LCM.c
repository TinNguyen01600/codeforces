#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int test;
    scanf("%d", &test);
 
    while(test--){
        int n,k,a,b,c;
        scanf("%d %d", &n, &k);
        if(n%2 == 1){
            a = b = (n-1)/2;
        }
        else if (n%4 == 0){
            a = b = n/4;
        }
        else{
            a = b = (n-2)/2;
        }
        c = n-a-b;
        printf("%d %d %d\n", a,b,c);
}
}

