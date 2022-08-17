#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <vector>
#include <conio.h>
#include <list>
#include <unordered_map>
using namespace std;

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