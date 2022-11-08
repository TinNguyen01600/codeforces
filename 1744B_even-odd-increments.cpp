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
        ll a[n], sum = 0;
        ll count_odd = 0, count_even = 0;
        for (ll i = 0; i<n; i++){
            cin >> a[i];
            if (a[i] % 2 == 0)  count_even++;
            else    count_odd++;
            sum += a[i];
        }
        ll type, x;

        vector <ll> result;

        for (ll i = 0; i<q; i++){
            cin >> type >> x;
            /*
                type = 0, x even: count_odd and count_even not change
                type = 0, x odd: all evens turn to odd -> co = n, ce = 0
                type = 1, x even: count_odd and count_even not change
                type = 1, x odd: all odds turn to even -> co = 0, ce = n
            */
            if (type == 0){
                sum += (x*count_even);
                if (x % 2 == 1){
                    count_odd = n;
                    count_even = 0;
                }  
            }
            else{
                sum += (x*count_odd);
                if (x % 2 == 1){
                    count_odd = 0;
                    count_even = n;
                }  
            }
            result.push_back(sum);
        }

        for (int i = 0; i<q; i++)    cout << result[i] << " ";
        cout << endl;
    }
}
