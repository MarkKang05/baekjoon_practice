#include <iostream>
using namespace std;

int n, k, cnt;

int main(int argc, char const *argv[])
{
    cin >> n >> k;

    while(n!=1){
        if(n>=k){

            if(n%k==0){
                n /= k;
                cnt++;
            } 
            else{
                cnt += n%k;
                n -= n%k;
            }
        }
        else{
            cnt = n-1;
            break;
        }
    }

    cout << cnt << "\n";

    return 0;
}
