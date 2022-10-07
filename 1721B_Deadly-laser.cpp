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
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;
        int up, down, left, right;
        up = sx - 1;
        down = n - sx;
        left = sy - 1;
        right = m - sy;

        if (d >= up && d >= left)   cout << -1 << endl;
        else if (d >= down && d >= right)   cout << -1 << endl;
        else if (d >= down && d >= up)   cout << -1 << endl;
        else if (d >= left && d >= right)   cout << -1 << endl;
        else cout << n+m-2 << endl;
    }
}
