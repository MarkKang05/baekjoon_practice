//https://www.acmicpc.net/problem/1157
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int alpha[26] = {0,};
    int max=0, max_val,cnt=0;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), (int(*)(int))toupper);
    for(int i=0; i<s.length(); i++){
        alpha[s[i]- 'A']++;
    }
    for(int i=0; i<26; i++){
        if(alpha[i]==max&&max!=0){
            cnt++;
        }
        if(alpha[i]>max){
            cnt=0;
            max = alpha[i];
            max_val = i;
        }    
    }

    if(cnt>0){
        cout << "?";
    }
    else{
        cout << (char)(max_val+'A');
    }
}

