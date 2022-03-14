#include <iostream>
#include <map>
using namespace std;

int n;
int arr[26];
string ret;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        arr[s[0]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(arr[i]>=5) ret+=(i+'a');
    }
    if(ret.size()==0) cout << "PREDAJA"<< "\n";
    else cout << ret <<"\n";

    return 0;
}
