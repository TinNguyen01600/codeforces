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
        else if (card == joker) result = 0;
        else{
            player--;
            int joker_left = joker - card_per_player;
            result = card_per_player - (joker_left / player + 1);
        }
        cout << result << endl;
    }
}