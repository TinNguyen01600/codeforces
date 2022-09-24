#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <vector>
#include <conio.h>
#include <list>
#include <unordered_map>
#include <stdlib.h>
#include <set>
#include <bits/stdc++.h>
using namespace std;
#define MAX_INPUT_LENGTH     100
#define ll long long
 
int main(int argc, const char * argv[]) {
    ll n; cin >> n;
    vector<ll> v, r;
    ll temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    // for (int i = 0; i<n; i++)  cout << v[i] << " ";
    // cout << endl;
 
    ll result = n/2;
 
    vector<ll> fir_half(result), sec_half(n-result);
    auto start = v.begin();
    auto end = v.begin() + result;
    copy(start, end, fir_half.begin());
    
    start = v.begin() + result;
    end = v.end();
    copy(start, end, sec_half.begin());
 
    ll count = 0, c1 = 0, c2 = 0;
    while (count < n){
        if (count % 2 == 0){
            r.push_back(sec_half[c2]);
            c2++;
        }
        else{
            r.push_back(fir_half[c1]);
            c1++;
        }
        count++;
    }
 
    result = (n%2==0) ? (result-1) : result;
    cout << result << endl;
    for (int i = 0; i<n; i++)  cout << r[i] << " ";
    // for (int i = 0; i<result; i++)  cout << fir_half[i] << " ";
    // cout << endl;
    // for (int i = 0; i<n - result; i++)  cout << sec_half[i] << " ";
    // cout << endl;
    
    // cout << endl;
    // for (int i = 0; i<n; i++)  cout << v[i] << " ";
    
// }
}