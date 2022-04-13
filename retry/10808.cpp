#include <iostream>
using namespace std;

int a[26];
string s;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> s;
    for(char c:s){
        a[c-'a']++;
    }

    for(int i=0; i<26; i++){
        cout << a[i] << "\n";
    }
    return 0;
}

