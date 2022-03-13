#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";

    for( auto num: numbers ){
        if(num==0){
            if(hand=="left")
                answer.append("L");
            else
                answer.append("R");
            continue;
        }
        int tmp = num%3;
        if(tmp==1){
            answer.append("L");
        } else if(tmp==0){
            answer.append("R");
        }else{ //

            if(hand=="left")
                answer.append("L");
            else
                answer.append("R");
        }
    }

    return answer;
}

int main(void) {

    vector<int> numbers = {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
    string hand = "right";

    cout << solution(numbers, hand);

    return 0;
}
