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