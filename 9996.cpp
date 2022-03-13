#include <iostream>
using namespace std;

int n;
string rule;
string pre;
string suf;

int main(int argc, char const *argv[])
{
    cin >> n;
    cin >> rule;

    int pos = rule.find('*');
    pre = rule.substr(0, pos);
    suf = rule.substr(pos+1);

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        
        if(pre.size()+suf.size() > s.size()){
            cout << "NE\n";
        } 
        else{
            if(pre==(s.substr(0,pre.size())) && suf==(s.substr(s.size()-suf.size()))) cout << "DA\n";
            else cout << "NE\n";
        }
    }
    
    return 0;
}
