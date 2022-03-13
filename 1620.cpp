#include <iostream>
#include <map>
using namespace std;

int n, m;
map<int, string> map1;
map<string, int> map2;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m; 
    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        map1[i+1] = temp;
        map2[temp] = i+1;
    }

    for(int i=0; i<m; i++){
        string temp;
        cin >> temp;

        if(atoi(temp.c_str())==0){ // is string;
            cout << map2[temp] << "\n";
        }else{
            cout << map1[atoi(temp.c_str())] << "\n";
        }
    }
    return 0;
}