#include <iostream>
using namespace std;

long long cost[100001];
long long dist[100001];

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for(int i=0; i<n-1; i++){
        cin >> dist[i];
    }

    for(int i=0; i<n; i++){
        cin >> cost[i];
    }

    long long now_cost = cost[0];
    long long total= now_cost*dist[0];

    for(int i=1; i<n; i++){
        if(now_cost < cost[i]){ //다음게 더 비쌀때
            total += now_cost * dist[i];
        }
        else{
            now_cost = cost[i];
            total += now_cost*dist[i];
        }
    }

    cout << total << "\n";


    return 0;
}
