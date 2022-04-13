#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> v;

int main(int argc, char const *argv[])
{
    cin >> n;

    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(y, x));
    }

    sort(v.begin(), v.end());
    int temp_time=0, result=0;
    for(int i=0; i<n; i++){
        if(temp_time <= v[i].second){
            temp_time=v[i].first;
            result++;
        }
    }
    cout << result << "\n";

    return 0;
}
