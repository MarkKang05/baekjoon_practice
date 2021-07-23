#include <iostream>
using namespace std;

int main(){
    int a,b,v;
    cin>>a>>b>>v;
    if((v-a)%(a-b)!=0){
        //cout << v/(a-b)+1;
        cout << (v-a)/(a-b) +2;
        return 0;
    }
    cout << (v-a)/(a-b)+1;
    //cout << (v-a)%(a-b);
}

