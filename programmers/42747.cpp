#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int n = citations.size();

    sort(citations.begin(), citations.end());

    for(int i=0; i < n; i++){
        if( citations[i] >= n-i ){
            answer = n-i;
            break;
        }
    }

    return answer;
}

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};

    cout << solution(citations);


    return 0;
}
