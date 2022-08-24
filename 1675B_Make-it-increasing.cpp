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
    if the last element of arr arr[n-1] < n-1, the array cannot be
    operated to increase 
    (because arr must be strictly increasing -> arr[n-1] is max)

    if there exists 2 0s adjacently, count = -1 because arr[i-1] 
    must be smaller than arr[i] and 0 cannot be divided to smaller
*/
 
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
                if (arr[i-1] == 0 && arr[i] == 0){
                    count = -1;
                    break;
                }
                else{
                    if (arr[i-1] >= arr[i]){
                        arr[i-1] /= 2;
                        i = 0;
                        count++;
                    }   
                }
                i++;
            }
        }
        cout << count << endl;
    }
}