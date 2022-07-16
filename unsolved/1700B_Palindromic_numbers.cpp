#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

void minus1(int arr1[], int arr2[], int result[], int len){
  int n = 0;
  for (int i = len-1; i>=0; --i){
    arr1[i] += n;
    if (arr2[i] >= arr1[i])  {
      result[i] = arr2[i] - arr1[i];
      n = 0;
    }
    else {
      arr2[i] += 10;
      result[i] = arr2[i] - arr1[i];
      n = 1;
    }
  }
  if(result[0] == 0){
    for(int i = 0; i<len; i++){
      result[i] = result[i+1];
    }
    len--;
  }
  for(int i = 0; i<len; i++)  cout << result[i];
}

int main(void){
  int n; cin >> n;
  
  while (n--){
    int len; cin >> len;
    string str1;
    getline(cin, str1);
    getline(cin, str1);
    
    int *arr1 = new int [len];
    int *arr2 = new int [len];
    int *result = new int [len];

    if(str1[0] == '9'){   // arr2 = 11..11
      len++;
      for (int i = 0; i < len; i++){
        arr2[i] = 1;
        arr1[i+1] = (int)str1[i] - 48;
      }
      arr1[0] = 0;
    }
    else {      // arr2 = 99..9
      for (int i = 0; i<len; i++)  {
        arr2[i] = 9;
        arr1[i] = (int)str1[i] - 48;
      }
    }

    // for (int i = 0; i < len; i++)  cout << arr2[i]; 
    // cout << endl;
    // for (int i = 0; i < len; i++)  cout << arr1[i];
    // cout << endl;

    minus1(arr1, arr2, result, len);  // arr2 - arr1
    cout << endl;
  }
}