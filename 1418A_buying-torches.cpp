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
        ll x,y,k;
        cin >> x >> y >> k;
        ll stick = k + y*k;
        ll count = (stick - 1)/(x-1) + k;
        if ((stick - 1) % (x - 1) != 0)   count+=1;
        cout << count << endl;
    }
}
