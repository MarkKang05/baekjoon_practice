#include <iostream>
#include <algorithm>
using namespace std;

int h[9];

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i=0; i<9; i++){
        cin >> h[i];
    }
    sort(h, h+9);

    do{
        int sum=0;
        for(int i=0; i<7; i++){
            sum+=h[i];
        }
        if(sum==100) break;
    }while(next_permutation(h, h+9));

    for(int i=0; i<7; i++){
        cout << h[i] << "\n";
    }

    return 0;
}
