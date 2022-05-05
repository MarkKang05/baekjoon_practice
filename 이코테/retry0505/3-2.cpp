#include <iostream>
#include <algorithm>
using namespace std;

int n, m, k;
int arr[1001];

int main(int argc, char const *argv[])
{
    cin >> n >> m >> k;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int first = arr[n-1];
    int second= arr[n-2];

    int result = (m/(k+1))*(first*k+second) + (m%(k+1))*first;
    
    cout << result << "\n";

    return 0;
}

