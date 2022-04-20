#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> a,b;

bool compare(int x, int y){
    return x>y;
}

int main(int argc, char const *argv[])
{
    cin >> n >> k;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), compare);

    for(int i=0; i<k; i++){
        if(a[i]<b[i]) swap(a[i], b[i]);
        else break;
    }

    long long result = 0;
    for(int i=0; i<n; i++){
        result+=a[i];
    }

    cout << result << '\n';

    return 0;
}
