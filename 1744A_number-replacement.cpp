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

struct replace{
    int num;
    char c;
};

bool solution(int a[], string s, int n){
    struct replace r[n];
    for (int i = 0; i<n; i++){
        r[i].num = a[i];
        r[i].c = s[i];
    }
    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
            if ((r[i].num == r[j].num) && (r[i].c != r[j].c))   return false;
        }
    }
    return true;
}

int main(int argc, char const* argv[])
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        string s;
        for (int i = 0; i<n; i++)   cin >> a[i];
        cin >> s;
        if (solution(a, s, n))  cout << "YES\n";
        else    cout << "NO\n";
    }
}
