#include <iostream>
#include <map>
using namespace std;

int n, m;
map<string, int> map1;
map<int, string> map2;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;

    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        map1[temp] = i+1;
        map2[i+1] = temp;
    }

    while(m--){
        string temp;
        cin >> temp;
        int ret = atoi(temp.c_str());
        if(ret==0) cout << map1[temp] << "\n";
        else cout << map2[ret] << "\n";
    }

    return 0;
}
