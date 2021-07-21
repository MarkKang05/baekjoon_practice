#include <iostream>
using namespace std;

int d(int);

int main(){
    bool li[10001]={0};


    for(int i=1; i<10001; i++){
        if(d(i)<10001) li[d(i)]= 1;
    }

    for(int i=1; i<10001; i++){
        if(!li[i]) cout << i << endl; 
    }

}

int d(int a){
    int res=a;
    while(a){
        res+=(a%10);
        a/=10;
    }
    
    return res;
}

