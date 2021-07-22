#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, m;
    string S;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m >> S;
        for(int j=0; j<S.length(); j++){
            for(int k=0; k<m; k++){
                cout << S[j];
            }
        }
        cout << endl;
    }
}

