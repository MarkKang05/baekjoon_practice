#include <iostream>
#include <string>
using namespace std;

string s;
int one, zero;

int main(int argc, char const *argv[])
{
    cin >> s;
    
    if(s[0]=='0') zero++;
    else one++;

    for(int i=1; i<s.size(); i++){
        if(s[i]!=s[i-1]){
            if(s[i]=='0') zero++;
            else one++;
        }
    } 

    cout << min(zero, one);

    return 0;
}
