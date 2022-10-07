#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <vector>
#include <conio.h>
#include <list>
#include <unordered_map>
#include <stdlib.h>
#include <set>
#include <bits/stdc++.h>
using namespace std;
#define MAX_INPUT_LENGTH     100
#define ll long long

template <typename T>
bool contains(list<T> & list_of_elements, const T & element){
    auto it = find(list_of_elements.begin(), list_of_elements.end(), element);
    return it != list_of_elements.end();
    // if element NOT found in list <=> find() returns list.end()
}

int main(int argc, const char * argv[]) {
    long int t; scanf("%ld", &t);
    while(t--){
        int len; cin >> len;
        string s; cin >> s;
        if (len != 5)   cout << "NO\n";
        else{
            list <char> s1;
            for (int i = 0; i < len ; i++){
                s1.push_back(s[i]);
            }
            bool result1 = contains(s1, 'T');
            bool result2 = contains(s1, 'i');
            bool result3 = contains(s1, 'm');
            bool result4 = contains(s1, 'u');
            bool result5 = contains(s1, 'r');

            if (result1 && result2 && result3 && result4 && result5)    cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
