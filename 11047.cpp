#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector<int> v;

int cmp(int a, int b){
    return a>b;
}

int main(int argc, char const *argv[])
{

    cin >> N >> K;

    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<N; i++){
        cout << v[i] << "\n";
    }


    return 0;
}
