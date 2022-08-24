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
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i<n; i++)   cin >> arr[i];
        int count = 0;
        if (arr[n-1] < n-1) count = -1;
        else{
            int i = 1;
            while (i < n){
                if (arr[i-1] >= arr[i]){
                    arr[i-1] /= 2;
                    i = 0;
                    count++;
                }   
                i++;
            }
        }
        cout << count << endl;
    }
}