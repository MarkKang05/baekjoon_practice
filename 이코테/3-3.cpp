#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
vector<int> v;

int main(int argc, char const *argv[])
{
    cin >> n >> m;

    int max_value = -1;
    for(int i=0; i<n; i++){
        int min_value = 10001;
        for(int j=0; j<m; j++){
            int tmp;
            cin >> tmp;
            min_value = min(tmp, min_value);
        }
        max_value = max(min_value, max_value);
    }

    cout << max_value << "\n";

    return 0;
}
/*
3 3
3 1 2
4 1 4
2 2 2

*/
