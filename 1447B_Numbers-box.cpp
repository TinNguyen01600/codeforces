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
        int n, m, sum = 0, min = 100;
        int count_neg = 0;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                cin >> arr[i][j];
                sum += abs(arr[i][j]);
                if (arr[i][j] < 0)  count_neg++;
                if (abs(arr[i][j]) < min)    min = abs(arr[i][j]);
            }
        }
        if (min != 0){
            if (count_neg % 2 != 0) sum -= 2*min;
        }
        cout << sum << endl;
    }
}