#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <vector>
#include <conio.h>
#include <list>
#include <unordered_map>
using namespace std;

int check_sub_equal(long int *arr, int len, int num){    // this function checks if all elements in arr equal to num
    int count = 0;
    for (int i = 0; i<len; i++){
        if (arr[i] == num)  count++;
        if (arr[i] < 0) return 0;
    }
    if (count == len)   return 1;
    else return 0;
}

long int max_arr(long int *arr, int len){
    long int max = 0;
    for (int i = 0; i<len; i++){
        if(arr[i] > max)    max = arr[i];
    }
    return max;
}

int main(int argc, char const* argv[])
{
    int t; cin >> t;
    while(t--){
        int n, r; cin >> n;
        long int arr1[n], arr2[n], sub[n], sub0[n];
        int i, j = 0, k = 0;
        for (i = 0; i < n; i++) cin >> arr1[i];
        for (i = 0; i < n; i++){
            cin >> arr2[i];
            if (arr2[i] != 0){
                sub[j] = arr1[i] - arr2[i];
                j++;
            }
            else{
                sub0[k] = arr1[i] - arr2[i];
                k++;
            }
        }

        if (k == 0){
            if (check_sub_equal(sub, j, sub[0]))    cout << "YES";
            else    cout << "NO";
        }
        else{
            if (check_sub_equal(sub, j, sub[0])){
                if (sub[0] >= max_arr(sub0, k))  cout << "YES";
                else    cout << "NO";
            }
            else {
                cout << "NO";
            }
        }
        cout << endl;
    }
}