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
    int t;  cin >> t;
    while(t--){
        int n; cin >> n;
        char *arr = new char [n];
        for (int i = 0; i < n; ++i) cin >> arr+i; 

        int s = n*(n-1)/2;  //the numbers of subtractions in an array with n elements is n(n-1)/2
        int sub;
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                sub = arr[i] - arr[j];
                cout << sub << endl;
            }
        }
        for (int i = 0; i < n; i++) cout << arr[i] << " "; 
    }
}