#include <iostream>
#include <map>
using namespace std;

int t,n;
string a,b;
int main(int argc, char const *argv[])
{
    cin >> t;
    while(t--){
        map<string, int> map1;
        cin >> n;
        while(n--) {
            cin >> a >> b;
            map1[b]++;
        }
        long long ret = 1;
        for(auto item : map1){
            ret *= ((long long)item.second +1);
        }
        ret--;

        cout << ret << "\n";

    }
    return 0;
}
