#include <iostream>
using namespace std;

string s;
int res=1;

int main(int argc, char const *argv[])
{
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i]!='0' || s[i]!='1') res *= (s[i]-'0');
        else res += s[i]-'0';
    }

    cout << res << "\n";

    return 0;
}
