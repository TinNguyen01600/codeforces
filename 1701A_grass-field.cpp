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
        int a,b,c,d;
        cin >> a >> b;
        cin >> c >> d;
        int sum = a+b+c+d;
        if (sum == 0)   cout << 0 << endl;
        else if (sum == 4)  cout << 2 << endl;
        else    cout << 1 << endl;
    }
}