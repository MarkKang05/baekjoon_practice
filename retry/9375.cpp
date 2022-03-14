#include <iostream>
#include <map>
using namespace std;
int n;

int main(int argc, char const *argv[])
{
    cin >> n;
    while(n--){
        int cnt;
        cin >> cnt;
        map<string, int> map1;
        while(cnt--){
            string trash, kind;
            cin >> trash >> kind;
            map1[kind]++;
        }

        int ret =1;
        for(auto item : map1){
            ret *= (item.second+1);
        }
        cout << ret-1 << "\n";
    }
    
    return 0;
}

