#include <iostream>
using namespace std;
string s, ret;
int arr[200], flag;
char mid;
int main(int argc, char const *argv[])
{
    cin >> s;

    for(char c:s) arr[c]++;
    for(int i='Z'; i>='A'; i--){
        if(arr[i]){
            if(arr[i] & 1){
                mid = char(i);
                flag++;
                arr[i]--;
            }
            if(flag==2) break;
            for(int j=0; j<arr[i]; j+=2){
                ret=char(i)+ret;
                ret += char(i);
            }
        }
    }
    if(mid) ret.insert(ret.begin() + ret.size() /2, mid);
    if(flag==2) cout << "I'm Sorry Hansoo\n";
    else cout << ret << "\n";

    return 0;
}
