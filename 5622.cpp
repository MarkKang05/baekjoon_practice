#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    int time=0;
    cin >> word;
    //0 1 2 => 3s
    //3 4 5 => 4s
    //6 7 8 => 5s
    //9 10 11 => 6s 
    //12 13 14 => 7s
    //15 16 17 => 
    for(int i=0; i<word.length(); i++){
        time += (word[i]-'A')/3+3;
        if(word[i]=='S' || word[i]=='V' || word[i]=='Y' || word[i]=='Z') time--;
    }

    cout << time;

}

