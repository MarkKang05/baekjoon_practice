#include <iostream>
using namespace std;

int main(){
    int n,i;
    cin >> n;
    for(i=1; i<n; i++){
        n-=i; 
    }
    if(i%2==0){
        cout<< n << "/" << i-n+1;
    }else{
        cout<< i-n+1 << "/" << n;
    }
}
