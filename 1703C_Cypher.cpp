#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;
 
int main(void){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *arr = new int [n];
        for (int i = 0; i<n; i++)   cin >> arr[i];
        for (int i = 0; i<n; i++){
            int b; string str;
            cin >> b >> str;
            for (int j = 0; j<b; j++){
                if (str[j] == 'U')  arr[i]--;
                else if(str[j] == 'D')  arr[i]++;
                if(arr[i] < 0)  arr[i] = 9;
                if (arr[i] > 9) arr[i] = 0;
            }
        }
        for (int i = 0; i<n; i++)   cout << arr[i] << " ";
        cout << endl;
    }
}