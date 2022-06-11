#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1001];

int main(int argc, char const *argv[])
{
    cin >>n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int res =1;

    for(int i=0; i<n; i++){
        if(res<arr[i]) break;
        res+=arr[i];
    }


    return 0;
}
