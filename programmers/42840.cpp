#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> p1 = {1,2,3,4,5};
    vector<int> p2 = {2,1,2,3,2,4,2,5};
    vector<int> p3 = {3,3,1,1,2,2,4,4,5,5};

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
