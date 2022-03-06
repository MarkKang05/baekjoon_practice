#include <algorithm>
#include <string>
#include <utility>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    // sort(participant.begin(), participant.end());
    // sort(completion.begin(), completion.end());

    // int i = 0;

    // for(i=0; i<completion.size(); i++){
    //     if(participant[i] != completion[i]){
    //         break;
    //     }
    // }

    // return participant[i];
    unordered_map<string, int> map;

    for (auto player :  participant){
        if( map.end() == map.find(player) )
            map.insert(make_pair(player, 1));
        else
            map[player]++;
    }

    for( auto player : completion ){
        map[player]--;
    }

    for( auto player : participant ){
        if( map[player] > 0){
            answer = player;
            break;

        }

    }

    return answer;
}

int main(void) {

    vector<string> part = {"leo", "kiki", "eden"};
    vector<string> comp = {"leo", "kiki"};

    cout << solution(part, comp);

    return 0;
}
