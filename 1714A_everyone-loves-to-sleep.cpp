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
Calculate subtractions of each alarm and the time Vlad went to bed
Subtractions can be (-) or (+), we only take positive results
(because the 'until the next alarm rings' -> sleeping time > 0)
1. Sort slepping time (subtractions) in ascending order.
   result is the 1st element
2. If all subtractions are negative, Vlad went to bed at the end of the day, when all alarms already rang
   => Next alarm is the first alarm next day
   Sort alarm in ascending order
   result = alarm[0] + 24 - (time Vlad went to bed)
*/

void array_2d_sort(int arr[][2], int len){
    int k, l;
    for (int i=0; i<len; i++){
		for(int j=i+1; j<len; j++){
		   if((arr[i][0] > arr[j][0]) || (arr[i][0] == arr[j][0] && arr[i][1] > arr[j][1])){
                k = arr[i][0];
                arr[i][0] = arr[j][0];
                arr[j][0] = k;

                l = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = l;
		    }
		}
	}
}

int main(int argc, char const* argv[])
{
    int t; cin >> t;
    while(t--){
        int n, H, M, h, m;
        int j = 0;
        cin >> n >> H >> M;
        int alarm[n][2], result[n][2];
        for (int i = 0; i<n; i++){
            cin >> alarm[i][0] >> alarm[i][1];
            h = alarm[i][0] - H;
            m = alarm[i][1] - M;
            if (m < 0){
                m += 60;
                h--;
            }
            if (h>=0 && m>=0){
                result[j][0] = h;
                result[j][1] = m;
                j++;
            }
        }
        array_2d_sort(alarm, n);
        if (j == 0){
            h = alarm[0][0] + 24 - H;
            m = alarm[0][1] - M;
            if (m < 0){
                m += 60;
                h--;
            }
            cout << h << " " << m << endl;
        }
        else{
            array_2d_sort(result, j);
            cout << result[0][0] << " " << result[0][1] << endl;
        }
        
        // array_2d_sort(result, n);
        // for (int i = 0; i<j; i++)   cout << result[i][0] << " " << result[i][1] << endl;
    }
}