#include <bits/stdc++.h>
 
using namespace std;
void sep_3(int n){
    int a, b, c;
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
    cout << a << " " << b << " " << c << " ";
}

int main ()
{
    int n, k, t;
    cin >> t;
    while (t--){
        cin >> n;
        cin >> k;
        if (k >= n/2 + 2){
            for (int i = 0; i < k-1; i++) cout << "1 ";
            cout << n - (k-1) << endl;
        }
        else{
            for(int i = 0; i < k-3; i++) cout << "1 ";
            sep_3(n-k+3);
            cout << endl;
        }
    }
}