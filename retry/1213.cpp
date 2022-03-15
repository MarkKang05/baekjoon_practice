#include <iostream>
using namespace std;

int cnt[200];
string s, ret;
int mid, flag;

int main(int argc, char const *argv[])
{
    cin >> s;
    for(char c: s) cnt[c]++;

    for(int i='A'; i<='Z'; i++){
        if(cnt[i]){
            if(cnt[i]&1){
                mid = i;
                flag++;
                cnt[i]--;
            }
            if(flag==2) break;
        }
    }
    for(int i='Z'; i>='A'; i--){
        if(flag == 2) break;
        if(cnt[i]){
            for(int j=0; j<cnt[i]; j+=2){
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }

    if(mid){
        ret.insert(ret.begin()+ret.size()/2, char(mid));
    }
    if(flag==2) cout << "I'm Sorry Hansoo\n";
    else cout << ret << "\n";

    return 0;
}
