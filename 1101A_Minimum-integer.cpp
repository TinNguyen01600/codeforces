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
        ll l, r, d, result;
        cin >> l >> r >> d;
        if (d < l)  result = d;
        else if (d > r) result = d;
        else{
            result = d * (r/d+1);
        }
        cout << result << endl;
    }
}