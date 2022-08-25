#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <vector>
#include <conio.h>
#include <list>
#include <unordered_map>
using namespace std;
 
int gcd(long int a, long int b){
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
 
 
int main(int argc, char const* argv[])
{
    int t; cin >> t;
    while(t--){
        long int a,b,c,d;
        scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if ((float)a/b == (float)c/d)   cout << 0 << endl;
        else{
            long int a1 = a, b1 = b, c1 = c, d1 = d;
            a /= gcd(a1,b1); b /= gcd(a1,b1);
            c /= gcd(c1,d1); d /= gcd(c1,d1);
            int i,j,k,l;
            if (c>=a)   i = c, j = a, k = b, l = d;
            else    i = a, j = c, k = d, l = b;
            if (j==0)   cout << 1 << endl;
            else{
                float m = (float)i/j;
                long int  n = m*k;
                if (n % l == 0)  cout << 1 << endl;
                else cout << 2 << endl;
            }
        }
    }
    
}