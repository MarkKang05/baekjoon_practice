#include <iostream>
using namespace std;

int n, k;
int psum[100001];

int main(int argc, char const *argv[])
{
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        int temp;
        cin >> temp;
        psum[i] = psum[i-1]+temp;
    }

    int ret = -10000004;
    for(int i=k; i<n; i++){
        ret = max(ret, psum[i]-psum[i-k]);
    }
    cout << ret << "\n";

    return 0;
}
