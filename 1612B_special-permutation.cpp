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
using namespace std;
#define MAX_INPUT_LENGTH     100
#define ll long long

int main(int argc, const char * argv[]) {
    long int t; scanf("%ld", &t);
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v, fir_half, sec_half;
        for(int i=1; i<=n; i++) v.push_back(i);

        double half = ((double)n+1)/2;

        if ((a < half && b < half) || (a > half && b > half))   cout << -1 << endl;
        else if (a > n/2 + 1)   cout << -1 << endl;
        else if (b < n/2)   cout << -1 << endl;
        else{
            v.erase(v.begin() + a-1);
            if (a > b)  v.erase(v.begin() + b-1);
            else    v.erase(v.begin() + b-2);

            fir_half.push_back(a);
            for (int i = 1; i < n/2; i++){
                int temp = v[(n-2)/2 + i - 1];
                fir_half.push_back(temp);
            }

            sec_half.push_back(b);
            for (int i = 1; i < n/2; i++){
                int temp = v[i - 1];
                sec_half.push_back(temp);
            }
            
            for (int i = 0; i < fir_half.size(); i++) cout << fir_half[i] << " ";
            for (int i = 0; i < sec_half.size(); i++) cout << sec_half[i] << " ";
            cout << endl;
        }
    }
}