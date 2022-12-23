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
        ll n, k, a, b;
        cin >> n >> k;
        if (k % 4 == 0) cout << "NO\n";
        else{
            cout << "YES\n";
            if (k % 2 == 0){
                for (int i = 1; i <= n/2; i++){
                    if (i % 2 == 0){
                        b = 2*i;
                        a = 2*i - 1;
                    }
                    else{
                        a = 2*i;
                        b = 2*i - 1;
                    }
                    cout << a << " " << b << endl;
                }
            }
            else{
                for (int i = 1; i <= n/2; i++){
                    a = 2*i - 1;
                    b = 2*i;
                    cout << a << " " << b << endl;
                }   
            }
        }
    }
}
