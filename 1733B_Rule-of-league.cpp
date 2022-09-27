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
        ll n, x, y;
        cin >> n >> x >> y;
        if (x != 0 && y != 0)   cout << -1 << endl;
        else if (x == 0 && y == 0)  cout << -1 << endl;
        else{
            ll temp = (x == 0) ? y : x;
            if ((n-1) % temp != 0)  cout << -1 << endl;
            else{
                ll z = (n-1) / temp;
                ll r = 2;
                for (int i = 0; i<z; i++){
                    for (int j = 0; j<temp; j++)    cout << r << " ";
                    r += temp;
                }
            }
            cout << endl;
        }
    }
}