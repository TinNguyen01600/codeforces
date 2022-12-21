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
    long int t; scanf("%ld", &t);
    while(t--){
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        if (s/k < b)    cout << -1 << endl;
        else if (s > ((k-1) * (n-1) + (k*(b+1)-1))) cout << -1 << endl;
        else if (s/k == b){
            cout << s << " ";
            for (int i = 1; i<n; i++)   cout << 0 << " ";
            cout << endl;
        }
        else{
            cout << k*(b+1)-1 << " ";
            s -= k*(b+1)-1;
            ll temp = k-1;
            for (int i = 1; i<n; i++){
                if (s > 0){
                    if (s>temp) s -= temp;
                    else {
                        temp = s;
                        s = 0;
                    }
                    cout << temp << " ";
                }
                else    cout << 0 << " ";
            }
            cout << endl;
        }
    }
}
