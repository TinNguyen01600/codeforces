#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;
 
int main(void){
    int t; cin >> t;
    while(t--){
        int key; cin >> key;
        int arr[3], count = 0;
        for (int i = 0; i < 3; ++i) cin >> arr[i];
        while(key != 0){
            key = arr[key-1];
            count++;
        }
        if(count == 3)  cout << "YES\n";
        else cout << "NO\n";
    }
}