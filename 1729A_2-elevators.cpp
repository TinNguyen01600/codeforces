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
        ll a, b, c, result;
        cin >> a >> b >> c;
        ll time1 = a - 1;
        ll time2 = abs(b-c) + abs(c-1);
        if (time1 == time2) result = 3;
        else if (time1 < time2) result = 1;
        else result = 2;
        cout << result << endl;
    }
}
