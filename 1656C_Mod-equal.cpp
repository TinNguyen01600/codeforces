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
    int n;  cin >> n;
    cout << n;
}