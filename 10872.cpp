#include <iostream>
using namespace std;

int f(int n){
    if(n>2) n *= f(n-1);
    return n;
}

int main(){
    int n,res=1;
    cin >> n;
    if(n!=0){
        res = f(n);
    }
    cout << res;
}

