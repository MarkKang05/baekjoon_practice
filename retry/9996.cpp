#include <iostream>
using namespace std;
int n;
string rule;
string pre, suf;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    cin >> rule;
    pre = rule.substr(0, rule.find('*'));
    suf = rule.substr(rule.find('*')+1);
    while(n--){
        string temp;
        cin >> temp;
        string t_pre = temp.substr(0, pre.size());
        string t_suf = temp.substr(temp.size() - suf.size());
        if((pre.size()+suf.size()) > temp.size()) {
            cout << "NE\n";
        } else {
            if(t_pre == pre && t_suf==suf) cout << "DA\n";
            else cout << "NE\n";
        }
    }
    return 0;
}
