#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end());

    for(int i=0; i < phone_book.size()-1; i++){
        if (phone_book[i+1].find(phone_book[i]) == 0) {
            return false;
        }

    }


    return true;
}

bool solution2(vector<string> phone_book) {

    unordered_map<string, int> map;

    for( int i=0; i < phone_book.size(); i++ ){
        map[phone_book[i]] = 1;
    }

    for( int i=0; i < phone_book.size(); i++ ){
        for( int j=1; j < phone_book[i].size(); j++ ){
            string phone_number = phone_book[i].substr(0,j);
            if(map[phone_number])
                return false;
        }
    }

    return true;


}

int main() {

    vector<string> phone_book = {"119", "1192423", "2222"};

    cout << solution(phone_book);
    cout << solution2(phone_book);

    return 0;
}
