#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int word=0, cnt=0;
    getline(cin, s);
    if(s.length()==1&&s[0]==' '){
        cout << cnt;
        return 0;
    } 

    for(int i=0; i<s.length(); i++){
        if(i!=0 && i!=(s.length()-1) && s[i]==' '){
            cnt++;
        }
    } 
    cout << cnt+1;
    return 0;
}

