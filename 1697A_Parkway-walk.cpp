#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <vector>
#include <conio.h>
#include <list>
#include <unordered_map>
using namespace std;


int main(int argc, char const* argv[])
{
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int arr[n], sum = 0;
        for (int i = 0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum >= m)   sum -= m;
        else sum = 0;
        cout << sum << endl;
    }
}