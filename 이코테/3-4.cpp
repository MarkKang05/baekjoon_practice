#include <iostream>
using namespace std;

int n, k;
int result;

int main(int argc, char const *argv[])
{

    cin >> n >> k;

    while(1){
        int target = (n/k)*k;
        result += n - target;

        n = target;

        if(n<k) break;

        result += 1;
        n /= k;
    }

    result += n-1;
    cout << result << "\n";
     
    //  while(n >= k){
    //      while(n%k!=0){
    //          n-=1;
    //          result+=1;
    //     }
    //     result += 1;
    //     n /= k;
    //  }
    //  while(n!=1){
    //      n-=1;
    //      result+=1;
    //  }
    //  cout << result << "\n";
    return 0;
}
