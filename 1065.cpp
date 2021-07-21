#include <iostream>
using namespace std;

bool solution(int n){
    if(n<100) return true;
    int n100 = n/100;
    int n10 = (n%100)/10; 
    int n1 = n%10;

    if((n100-n10)==(n10-n1)){
        return true;
    }
    return false;
}


int main(){

    int n, cnt=0;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        if(solution(i)) cnt++;
    }
    cout << cnt;
}
