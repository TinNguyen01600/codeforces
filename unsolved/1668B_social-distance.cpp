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
        ll people, chair;
        cin >> people >> chair;
        vector<int> v;
        ll temp;
        for(int i=0; i<people; i++){
            cin >> temp;
            v.push_back(temp);
        }
        if (people > chair) cout << "NO\n";
        else{
            v.push_back(v[0]);

            ll taken_chair = 0, empty_chair = 0;
            while (taken_chair != people){
                taken_chair ++;
                ll x = (v[taken_chair] > v[taken_chair - 1]) ? v[taken_chair] : v[taken_chair - 1];
                empty_chair += x;
            }

            if (taken_chair + empty_chair <= chair) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
    }
}
