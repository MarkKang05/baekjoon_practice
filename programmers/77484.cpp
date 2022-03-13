#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> temp = lottos;
    int cnt = 0;

    for(auto item: win_nums){
        if(find(lottos.begin(), lottos.end(), item) != lottos.end()){
            temp.erase(remove(temp.begin(), temp.end(), item), temp.end());
            cnt++;
        }
    }

    int zero_cnt = 0;

    for(auto l: lottos)
        if(l==0)
            zero_cnt++;

    int max = cnt+zero_cnt; // 최대 당첨 갯수
    int min = cnt; // 최소 당첨 갯수

    if (max >= 6)
        max=6;
    if(min < 2)
        min=1;

    if(cnt==0 && zero_cnt==0){
        answer.push_back(6);
        answer.push_back(6);
        return answer;
    }


    answer.push_back(7-max);
    answer.push_back(7-min);
    return answer;
}

int main(void) {

    // vector<int> lottos = {44, 1, 0, 0, 31, 25};
    // vector<int> win_nums = {31, 10, 45, 1, 6, 19};

    vector<int> lottos = {0, 0, 0, 0, 0, 0};
    vector<int> win_nums = {38, 19, 20, 40, 15, 25};

    vector<int> result = solution(lottos, win_nums);

    for( auto item: result ){
        cout << item << endl;
    }


    return 0;
}
