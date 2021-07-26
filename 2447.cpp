#include <iostream>
using namespace std;

void star(int n){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==1&&j==1){
                for(int k=0; k<n/3; k++) cout << " ";
                continue;
            }
            for(int k=0; k<n/3; k++) cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    //cin >> n;

    star(9);


}

