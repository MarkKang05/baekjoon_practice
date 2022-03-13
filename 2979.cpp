#include <iostream>
using namespace std;


int A,B,C,a,b,res;
int cnt[101];

int main(void)
{
    cin >> A >> B >> C;
    for(int i=0; i<3; i++){
        cin >> a >> b;
        for(int j=a; j<b; j++){
            cnt[j]++;
}
    }

    for(int i=1; i<100; i++){
        if(cnt[i]){
            if (cnt[i]==1) res+=A;
            else if (cnt[i]==2) res+=B*2;
            else if (cnt[i]==3) res+=C*3;
        }
    }
    cout << res << "\n";

    return 0;
}
