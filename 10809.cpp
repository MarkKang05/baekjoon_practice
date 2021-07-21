#include <iostream>
using namespace std;

int main(void){
    //97~122
    char S[101] = {};
    int alpha[26];
    cin >> S;

    for(int i=0; i<26; i++){
        alpha[i] = -1;
    }
    
    for(int i=0; i<100; i++){
        if(alpha[S[i]-97]<0) {
            alpha[S[i]-97] = i;
            
        }
    }
    for(int i=0; i<26; i++){
        cout << alpha[i] << " ";
    }

    return 0;

}
