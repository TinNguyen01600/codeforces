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
 
int main(int argc, char const* argv[])
{
    int t; cin >> t;
    while(t--){
        ll n, q; cin >> n >> q;
        ll a[n];
        for (ll i = 0; i<n; i++)    cin >> a[i];
        ll type, x;
 
        vector <ll> result;
 
        for (ll i = 0; i<q; i++){
            cin >> type >> x;
            ll sum = 0;
            if (type == 0){
                for(ll j = 0; j<n; j++){
                    if (a[j] % 2 == 0)  a[j] += x;
                    sum += a[j];
                }
            }
            else{
                for(ll j = 0; j<n; j++){
                    if (a[j] % 2 == 1)  a[j] += x;
                    sum += a[j];
                }
            }
            result.push_back(sum);
        }
 
        for (int i = 0; i<q; i++)    cout << result[i] << endl; 
    }
}