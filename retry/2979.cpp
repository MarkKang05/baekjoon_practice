#include <iostream>
using namespace std;

int A,B,C, a,b;
int arr[101];
int main(int argc, char const *argv[])
{
    cin >> A >> B >> C;

    for(int i=0; i<3; i++){
        cin >> a >> b;
        for(int j=a; j<b; j++){
            arr[j]++;
        }
    }

    int ret = 0;
    for(int i=0; i<101; i++){
        if(arr[i]==1) ret += A*arr[i];
        else if(arr[i]==2) ret += B*arr[i];
        else if(arr[i]==3) ret += C*arr[i];
    }

    cout << ret << "\n";

    return 0;
}
