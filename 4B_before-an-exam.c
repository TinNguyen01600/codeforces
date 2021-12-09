#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int S(int a[], int n);

int main(){
	int d, sumTime;
    double m[30][2], sumMin = 0, sumMax = 0;
    int a[30];
    scanf("%d %d", &d, &sumTime);
    for (int i = 0; i<d; i++){
        for (int j = 0; j<2; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    for (int i = 0; i<d; i++){
        sumMin += m[i][0];
        sumMax += m[i][1];
    }
    if (sumTime < sumMin || sumTime > sumMax) printf("NO");
    else {
        printf("YES\n");
        // for (int i = 0; i<d; i++){
        //     a[i] = round((m[i][0] + m[i][1]) / 2);
        // }
        // if (S(a, d) > sumTime){
        //     int sum = 0;
        //     for (int i = 0; i<d-1; i++) {
        //         printf("%d \t", (int)m[i][0]);
        //         sum += m[i][0];
        //     }
        //     printf("%d", sumTime - sum);
        // }
        // else{
        //     for (int i = 0; i<d-1; i++) printf("%d \t", a[i]);
        //     printf("%d", sumTime - S(a, d-1));
        // }
    }
}

// int S(int A[], int n){
//     int temp = 0;
//     for(int i = 0; i<n; i++)
//         temp+=A[i];
//     return temp;
// }