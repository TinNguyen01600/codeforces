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
    the maximum claps needed is 2 because we can change 2 num and den by 2 claps
    for ex, a/b and c/d is not equal.
    change a to a * (c*b), change b to b * (d*a), a/b becomes acb/bda = c/d

    if (((a*d) % (c*b) == 0) or ((c*b) % (a*d) == 0)), 1 clap is needed
    for ex 4/3 and 2/9.
    change 4/3 to 4/(3*6) = 4/18 = 2/9
*/

int main(int argc, char const* argv[])
{
    int t; cin >> t;
    while(t--){
        long long a,b,c,d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if ((double)a/(double)b == (double)c/(double)d)   cout << 0 << endl;
        else if (a == 0 || c == 0)  cout << 1 << endl;
        else if (((a*d) % (c*b) == 0) || ((c*b) % (a*d) == 0))   cout << 1 << endl;
        else    cout << 2 << endl;
    }
}
