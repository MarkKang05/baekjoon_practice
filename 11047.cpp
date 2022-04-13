#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K, cnt=0;
vector<int> v;

int cmp(int a, int b){
    return a>b;
}

int main(int argc, char const *argv[])
{

    cin >> N >> K;

    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N; i++){
        cnt += K/v[i];
        K %= v[i];
    }

    cout << cnt << "\n";


    return 0;
}
