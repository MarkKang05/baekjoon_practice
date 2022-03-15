#include <iostream>
#include <algorithm>
using namespace std;
int n, m, arr[150001], cnt;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]+arr[e] == m) { cnt++; s++; e--; }
        else if(arr[s]+arr[e] > m) e--;
        else s++;
    }

    cout << cnt <<"\n";

}
