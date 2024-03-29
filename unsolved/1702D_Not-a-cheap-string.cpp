#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

void removeCharFromArray(char *str, char charsToRemove, long int len) {
    int i;
    for (i = 0; i<len; i++){
        if (str[i] == charsToRemove) break;
    }
    string x(str);
    x.erase(x.begin() + i);
    strcpy(str, x.c_str());
}

void removeCharFromString(string &str, char charsToRemove, long int len) {
    int i;
    for (i = 0; i<len; i++){
        if (str[i] == charsToRemove) break;
    }
    str.erase(str.begin()+i);
}
 
int main(void){
    long int t; scanf("%ld", &t);
    while(t--){
        // char *str, *sorted;
        // scanf("%s", str);
        // printf("%s", str);
        // copy(str, str+len, sorted);
        // sort(sorted, sorted + len);
        // printf("%s", sorted);
        string str; 
        cin >> str;
        long int len = str.length();
        long int p; scanf("%ld", &p);
 
        string sorted = str;
        sort(sorted.begin(), sorted.end());
        long int sum = 0, i;
        for (i = 0; i < len; i++){
            long int index = (int)str[i] - 96;
            sum += index;
        }
        while(sum > p){
            sum -= ((int)sorted[len-1] - 96);
            char n = sorted[len-1];
            removeCharFromString(str, n, len);
            len--;
        }
        cout << str << endl;
    }
}