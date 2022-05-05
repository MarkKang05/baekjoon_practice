#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100001];
int cnt, res;

int main(int argc, char const *argv[])
{
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int i=0; i<n; i++){
        cnt++;
        if(i<=cnt){
            res++;
            cnt=0;
        }
    }

    cout << res << "\n";

    return 0;
}
