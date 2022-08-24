#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <vector>
#include <conio.h>
#include <list>
#include <unordered_map>
using namespace std;
int check_0(int *arr, int len){
    for (int i = 1; i<len; i++){
        if (arr[i] == 0)    return 1;
    }
    return 0;
}
 
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
            int i = 0;
            while (i < n-1){
                if (check_0(arr, n) == 1){
                    count = -1;
                    break;
                }
                else{
                    if (arr[i] >= arr[i+1]){
                        arr[i] /= 2;
                        i = -1;
                        count++;
                    }   
                }
                i++;
            }
        }
        cout << count << endl;
    }
}