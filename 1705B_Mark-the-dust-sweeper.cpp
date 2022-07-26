/*
Since the machine only increases/decreases numbers by 1 in each step
=> The total steps = sum of all elements in array
 */
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main(void){
  int t;  cin >> t;
  while(t--){
    long int n; cin>>n;
    long int i = 0;
    long int *arr = new long int [n];
    for (i = 0; i < n; ++i)     cin >> arr[i];
    long long int count = 0; i = 0;
    while(arr[i] == 0)  i++;
    if(i<n){
      for (i = i; i<n-1; i++){
        if(arr[i] != 0)  count += arr[i];
        /*
        Two indices i<j such that the dust levels ai, ai+1, …, aj−1 are all strictly greater than 0.
        All 0s in-between 2 non-zero numbers must also be counted (1 step to make that 0 -> greater than 0)
        */
        else count += 1;
      }
    }
    cout << count << endl;
  }
}