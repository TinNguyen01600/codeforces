#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <vector>
#include <conio.h>
#include <list>
#include <unordered_map>
using namespace std;

/*
sort the input array (arr1) in ascending order -> arr2
initialize a new array (arr3), arr3 must differ from arr1 in every position
pick first element from arr2 (min) to put in arr3
if arr2[0] equals arr1 in same position, pick arr2[1] (because arr3 must be minimal)
every time pick a number from arr2, delete that num from arr2
untill arr2's length = 2:
- if arr2[last] = arr1[last], arr3[last] = arr2[0] and arr3[last - 1] = arr2[1]
*/

int deleteElement(int arr[], int n, int x){
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)    break;
    
    if (i < n){
        n = n - 1;
        for (int j=i; j<n; j++) arr[j] = arr[j+1];
    }
    return n;
}

int main(int argc, char const* argv[])
{
    int t; cin >> t;
    while(t--){
        int n, n1;  cin >> n; n1 = n;
        int arr1[n], arr2[n];
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
            arr2[i] = arr1[i];
        }		
        if (n==1)   cout << -1 << endl;
        else{
            sort(arr2, arr2 + n);
            int arr3[n];
            for(int i = 0; i < n1; i++){
                if (n==2 && arr2[1] == arr1[n1-1]){
                    arr3[n1-2] = arr2[1];
                    arr3[n1-1] = arr2[0];
                    break;
                }
                if (arr2[0] != arr1[i]){
                    arr3[i] = arr2[0];
                    n = deleteElement(arr2, n, arr2[0]);
                }
                else{
                    arr3[i] = arr2[1];
                    n = deleteElement(arr2, n, arr2[1]);
                }
            }
            for(int i = 0; i < n1; i++)  cout << arr3[i] << " ";
            cout << endl;
        }
    }
}