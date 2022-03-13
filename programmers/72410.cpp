#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);

    answer = new_id;

    return answer;
}

int main(void) {


    string new_id = "...!@BaT#*..y.abcdefghijklm";
    cout << solution(new_id);

    return 0;
}
