#include <iostream>
using namespace std;

int main(){

    int n, tmp=0, score=0;
    char str[80];
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> str;
        score = 0;
        tmp=0;
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
