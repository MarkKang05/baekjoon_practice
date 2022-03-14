#include <iostream>
using namespace std;

string s;
string ret;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    getline(cin, s);

    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            if((s[i]-'A') < 13) ret+=s[i]+13;
            else ret+=s[i]-13;
        }
        else if(s[i]>='a' && s[i]<='z'){
            if((s[i]-'a') < 13) ret+=s[i]+13;
            else ret+=s[i]-13;
        }
        else ret += s[i];
    }

    cout << ret << "\n";
    
    return 0;
}
