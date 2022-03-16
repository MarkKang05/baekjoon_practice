#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    answer = answers;
    return answer;
}

int main(int argc, char const *argv[])
{
    vector<int> answers = {1,2,3,4,5};
    vector<int> res;

    res = solution(answers);

    for(auto i : res){
        cout << i << " ";
    }

    return 0;
}
