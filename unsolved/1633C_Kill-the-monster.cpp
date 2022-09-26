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

/*
int n, a, b;
cin >> n >> a >> b;
vector<int> v, fir_half, sec_half;
for(int i=0; i<n; i++) v.push_back(i);

void swap(int *a,int *b){
    int k=*a;
    *a=*b;
    *b=k;
}
*/

int main(int argc, const char * argv[]) {
    long int t; scanf("%ld", &t);
    while(t--){
        ll hc, dc, hm, dm;
        ll k, w, a;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;
        ll char_turn, mon_turn;

        char_turn = (hm % dc == 0) ? (hm/dc) : (hm/dc + 1);
        mon_turn = (hc % dm == 0) ? (hc/dm) : (hc/dm + 1);

        if (mon_turn >= char_turn) cout << "YES" << endl;
        else{
            if (k == 0) cout << "NO" << endl;
            else{
                ll x,y;
                if (k%2 == 0)  {
                    x = k/2; y = x;
                    dc += x*w;
                    hc += y*a;

                    char_turn = (hm % dc == 0) ? (hm/dc) : (hm/dc + 1);
                    mon_turn = (hc % dm == 0) ? (hc/dm) : (hc/dm + 1);

                    if (mon_turn >= char_turn) cout << "YES" << endl;
                    else cout << "NO\n";
                }
                else{
                    x = k/2; y = x+1;
                    dc += x*w;
                    hc += y*a;

                    char_turn = (hm % dc == 0) ? (hm/dc) : (hm/dc + 1);
                    mon_turn = (hc % dm == 0) ? (hc/dm) : (hc/dm + 1);
                    
                    if (mon_turn >= char_turn) cout << "YES" << endl;
                    else{
                        y = k/2; x = y+1;
                        dc += x*w;
                        hc += y*a;

                        char_turn = (hm % dc == 0) ? (hm/dc) : (hm/dc + 1);
                        mon_turn = (hc % dm == 0) ? (hc/dm) : (hc/dm + 1);
                        
                        if (mon_turn >= char_turn) cout << "YES" << endl;
                        else cout << "NO\n";
                    }
                }
                
            }
        }
    }
}
