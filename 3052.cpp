//https://www.acmicpc.net/problem/3052
#include <iostream>
using namespace std;

int main(){
    int n,t=0;
    int ary[42] = {0,};

    for(int i=0; i<10;i++){
        cin >> n;
        if(!ary[n%42]++){
            t++;
        }
    }
    cout << t;
}
