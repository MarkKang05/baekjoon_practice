#include <iostream>
using namespace std;

int main(){
    int ary[9], max=0, max_idx=0;

    for(int i=0; i<9; i++){
        cin >> ary[i];

        if(ary[i]>ary[max_idx]){
            max_idx=i;
        }
    }

    cout << ary[max_idx] << "\n" << max_idx+1;
}
