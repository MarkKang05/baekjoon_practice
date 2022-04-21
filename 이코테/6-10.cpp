#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> v;

bool compare(int x, int y){
    return x>y;
}

int main(int argc, char const *argv[])
{

    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    return 0;
}

/*
3
15
27
12

*/
