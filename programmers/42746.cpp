#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;

    for(auto num: numbers){
        temp.push_back(to_string(num));
    }

    sort(temp.begin(), temp.end(), cmp);

    if( temp.at(0) == "0" ) return 0;

    for( auto num : temp )
        answer += num;

    return answer;
}

int main() {

    vector<int> numbers = {6, 10, 2, 0};

    cout << solution(numbers);


    return 0;
}
