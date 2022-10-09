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
        int n, c;
        cin >> n >> c;
        int arr[101];
        for (int i = 0; i<101; i++) arr[i] = 0;
 
        int x;
        for (int i = 0; i<n; i++){
            cin >> x;
            arr[x]++;
        }
 
        int price = 0;
        for (int i = 0; i<101; i++){
            if (arr[i] == 1)    price++;
            else if (arr[i] > 1)    price += c;
        }
 
        int result = (price > n) ? n : price;
        cout << result << endl;
    }
}