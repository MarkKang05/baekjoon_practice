#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int m = 1003, n,k, ary[m];

    cin >> n >> k;
     for(int i=2; i<=n; i++){
         ary[i] = i;
     }
     int cnt = 0;
     for(int i=2; i<=n; i++){
         for(int j=1; i*j <= n; j++){
             if(ary[i*j] == -1){
                 continue;
             }
             ary[i*j] = -1;
             cnt++;
             if(cnt==k){
                 cout << i*j;
                 return 0;
             }
         }
     }

}

