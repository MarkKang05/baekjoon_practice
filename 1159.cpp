#include <iostream>
using namespace std;

int n;
int cnt[26];
string ret;
int main(int argc, char const *argv[])
{
    cin >> n;
    for(int i=0; i<n; i++){
        string name;
        cin >> name;
        cnt[name[0] - 'a']++;
    }

    for(int i=0; i<26; i++){
        if(cnt[i] >= 5) ret += i+'a';
    }
    if(ret == "") cout << "PREDAJA" << "\n";
    else cout << ret << "\n";

    return 0;
}
