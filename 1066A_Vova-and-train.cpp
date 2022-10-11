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
using namespace std;
#define MAX_INPUT_LENGTH     100
#define ll long long

int main(int argc, const char * argv[]) {
    int t; cin >> t;
    while(t--){
        ll L, v, l, r;
        cin >> L >> v >> l >> r;
        ll n = L/v;
        r = r/v * v;
        l = (l%v == 0) ? (l/v * v) : ((l/v + 1) * v);
        ll m = (r-l)/v + 1;
        cout << n - m << endl;
    }
}