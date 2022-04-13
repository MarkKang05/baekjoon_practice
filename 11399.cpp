#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int n;
vector<int> v;
int result=0;

int main(int argc, char const *argv[])
{
    cin >> n;    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            result+=v[j];
        }
    }

    cout << result << "\n";

    return 0;
}
