#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;

    unordered_map<string, int> map;
    for(vector<string> clothe : clothes){
        map[clothe[1]]++;
    }

    answer=1;
    for(auto it = map.begin(); it != map.end(); it++)
        answer *= it->second +1;


    return answer-1;
}

int main(void){
    vector<vector<string>> clothes = { {"yellowhat", "headgear"},
                                       {"bluesunglasses", "eyewear"},
                                       {"green_turban", "headgear"}};

    cout << solution(clothes);


}
