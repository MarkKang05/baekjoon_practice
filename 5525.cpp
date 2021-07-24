#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,m;
    string s;
    cin >> n >> m >> s;

    for(int i=m; i>0; i--){
        int t = s.find("IOI",i);
        cout << t << endl;
    }
}

