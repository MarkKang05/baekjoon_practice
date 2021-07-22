//https://www.acmicpc.net/board/view/71382
#include <iostream>
using namespace std;

int main(){

    int n, tmp=0, score=0;
    cin >> n;

    for(int i=0; i<n; i++){
        char str[80] ={0,};
        cin >> str;
        tmp=0;
        score = 0;
        for(int j=0; j<80; j++){
            if(str[j]=='O'){
                tmp++;
            }
            else{
                tmp=0;
            }
            score+=tmp;

        }
        cout << score <<"\n"; 
    }

    return 0;
}
