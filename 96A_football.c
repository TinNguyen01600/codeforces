#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 
int main(){
	char a[100];
    int sum = 0;
    scanf("%s", &a);
 
    for (int i = 1; i<strlen(a); i++){
        if (a[i] == a[i-1]) sum++;
        else sum = 0;
        if(sum == 6) break;
    }
    if(sum >= 6) printf("YES");
    else printf("NO");
}