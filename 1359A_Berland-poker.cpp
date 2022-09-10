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
using namespace std;
#define MAX_INPUT_LENGTH     100
#define ll long long
 
int main(int argc, const char * argv[]) {
    long int t; scanf("%ld", &t);
    while(t--){
        int card, joker, player, card_per_player, result;
        cin >> card >> joker >> player;
        card_per_player = card / player;
        if (joker <= card_per_player)   result = joker;
        else{
            player--;
            int joker_left = joker - card_per_player;
            int k = (joker_left % player == 0) ? (joker_left / player) : (joker_left / player + 1);
            result = card_per_player - k;
        }
        cout << result << endl;
    }
}