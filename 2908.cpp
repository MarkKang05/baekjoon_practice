#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1, s2, res;

    cin >> s1 >> s2;

    for(int i=0; i<3; i++){
        if(s1[2-i] > s2[2-i]){
            res = s1;
            break;
        }
        else if(s1[2-i] == s2[2-i]){
            continue;
        }
        else{
            res = s2;
            break;
        }
    }

    cout << res[2] << res[1] << res[0];


}

