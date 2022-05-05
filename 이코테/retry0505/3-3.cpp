#include <iostream>
using namespace std;

int n, m, res;

int main(int argc, char const *argv[])
{
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int min=10001;
        for(int j=0; j<m; j++){
            int x;
            cin >> x;
            if (x < min) min = x;
        }

        if (min > res) res = min;
    }

    cout << res << "\n";

    return 0;
}
