#include <iostream>
using namespace std;

int main(){
    int t,h,w,n;

    cin >> t;
    for(int i=0; i<t;i++){
        cin >> h >> w >> n;
        int hh, ww;
        hh = n%h;
        ww = n/h;
        if(hh > 0) ww++;
        else hh = h;
        cout << hh*100 + ww << "\n";
    }

/*     for(int i=0; i<t; i++){
 *         cin >> h >> w >> n;
 *
 *         if(n/h%10!=0){
 *             if(n%h!=0){
 *                 cout<<n%h<< 0 <<n/h+1;
 *                 continue;
 *             }
 *             cout<<n%h+1<< 0 <<n/h+1;
 *             continue;
 *         }
 *         if(n%h!=0){
 *             cout<<n%h<<n/h+1;
 *             continue;
 *         }
 *         cout<<n%h+1<<n/h+1;
 *     } */

}

