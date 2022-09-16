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
 
void swap(int *a,int *b){
	int k=*a;
	*a=*b;
	*b=k;
}
 
int main(int argc, const char * argv[]) {
    long int t; scanf("%ld", &t);
    while(t--){
        ll n, temp;
        cin >> n;
        vector<int> v1, v2;
        for(ll i=1; i<=n; i++) {
            cin >> temp;
            v1.push_back(temp);
            v2.push_back(temp);
        }
        sort(v2.begin(), v2.end());
 
        // for (auto x : v1)   cout << x << " ";
        // cout << endl;
        // for (auto x : v2)   cout << x << " ";
 
        // for (ll i = 0; i < n; i++)  cout << v1[i] << " ";
        
        ll j = 0;
        while (j < n-1){
            if ((v1[j] > v1[j+1]) && ((v1[j] + v1[j+1]) % 2 != 0)){
                temp = v1[j];
                v1[j] = v1[j+1];
                v1[j+1] = temp;
                j = 0;
            }
            else j += 1;
        }
 
        // for (ll i = 0; i < n; i++)  cout << v1[i] << " ";
        // for (ll i = 0; i < n; i++)  cout << v2[i] << " ";
 
        if (v1 == v2)   cout << "YES\n";
        else cout << "NO\n";
    }
}