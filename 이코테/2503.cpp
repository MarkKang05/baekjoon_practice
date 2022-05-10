#include <iostream>
using namespace std;

int n;
bool num[1001];

int main(int argc, char const *argv[])
{
    cin >> n;

    fill(num, num+1001, true);

    for(int i=100; i<=999; i++){
        string temp = to_string(i);
        if(temp[0] == temp[1] || temp[1]==temp[2] || temp[0]==temp[2]) {
            num[i]=false;
            continue;
        }
        if(temp.find('0')!=string::npos){
            num[i]=false;
            continue;
        }
        
    }

    for(int i=0; i<n; i++){
        int number, st, b;
        cin >> number >> st >> b;
        string s = to_string(number);

        for(int i=100; i<=999; i++){
            if(num[i]){
                string compare = to_string(i);
                int comS=0;
                int comB=0;
                for(int x=0; x<3; x++){
                    for(int y=0; y<3; y++){
                        if(x==y && s[x]==compare[y]){
                            comS++;
                            continue;
                        }else if(x!=y && s[x]==compare[y]){
                            comB++;
                            continue;
                        }
                    }
                }
                if(st!=comS || b!=comB){
                    num[i]=false;
                    continue;
                }
            }
        }

    }

    int answer=0;
    for(int i=100; i<=999; i++){
        if(num[i]) answer++;
    }
    cout << answer <<"\n";
    return 0;


    return 0;
}
