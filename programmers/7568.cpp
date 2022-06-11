#include <iostream>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> v;

int main(int argc, char const *argv[])
{
    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;        
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<n; j++){
            if((v[i].first < v[j].first) && (v[i].second< v[j].second)){
                k++;
            }
        }
        cout << k+1 << " ";
    }

    return 0;
}
