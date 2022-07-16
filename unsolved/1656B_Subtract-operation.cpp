#include <bits/stdc++.h>
using namespace std;

/*
the idea of the solution is that if the subtraction of any 2 array numbers equals k then the output is YES
for example we have an array with 4 numbers: a,b,c,d
The subtraction of d and b is k, d-b=k; then the output is YES because we can do these following steps
a       b       c       d
/      b-a     c-a     d-a      (-a)
/      b-c      /      d-c      (-(c-a))
/       /       /      d-b=k    (-(b-c))
this rule can be applied with arrays with more or less than 4 numbers.
*/

int main(void){
    long int t;  cin >> t;
    while(t--){
        long int n, k; 
        long int i, j;  //count variables
        cin >> n >> k;
        long int *arr = new long int [n];
        for (i = 0; i < n; ++i) cin >> arr[i];

        int output = 0;
        for(i = 0; i<n-1; i++){
            for(j = i+1; j<n; j++){
                long int sub = arr[i] - arr[j];
                if((sub == k) || (sub == -k)) {output = 1; break;}
            }
        }
        if(output == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
