#include <iostream>
#include <vector>
using namespace std;

int n, m, k;
vector<int> v;

int main(int argc, char const *argv[])
{

    cin >> n >> m >> k;

    for(int i=0; i<n; i++){
        int tmp; 
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int first = v[n-1];
    int second = v[n-2];

    int first_cnt = (m/(k+1))*k;
    first_cnt += m%(k+1);

    int second_cnt = m-first_cnt;

    int result = first_cnt*first;
    result += second_cnt*second;

    cout << result << "\n";

    return 0;
}

/*
5 8 3
2 4 5 4 6
*/