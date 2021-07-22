#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s;
    char alpha[26];

    cin >> s;

    for(int i=0; i<26; i++){
        cout << (int)s.find(i+97) << " ";
    }
}

