#include <bits/stdc++.h>
 
using namespace std;

int prime(int n){
	for(int i = 2; i < n; i++){
    if(n % i == 0) return i;
  }
  return 1;
}

int main ()
{
    int n, sum = 0; 
    cin >> n;
    for(int i = 1; i<=n; i++) sum += i;
    int k = prime(sum);
    if(k == 1) cout << "No";
    else {
        cout << "Yes" << endl;
        cout << "1 " << k << endl << n-1 << " ";
        for(int i = 1; i <= n; i++){
            if(i != k) cout << i << " ";
        }
    }
}