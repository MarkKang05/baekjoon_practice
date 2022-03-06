#include <iostream>
using namespace std;

// (1,1)(1,4)(1,7)(1,10) -----()
//
// (3,3) (3,4) (3,5)
// (4,3) (4,4) (4,5)
// (5,3) (5,4) (5,5)
//
void star(int i, int j, int n){

    // if(i%3==1 && j%3==1){
    //     cout << " " << endl;
    // }
    // i/3=>1,1,1
    // cout << "star(" << i << j << n << ")" << endl;
    if((i/n)%3==1 && (j/n)%3==1){
        cout << " ";
    }
    else{
        if(n / 3 ==0)
        cout << '*';
        else
        star(i, j, n/3);
    }

}

int main(){
    int n;
    cin >> n;

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            star(i,j,n);
        }
        cout << "\n";
    }


}

