#include <iostream>
#include <string>
using namespace std;
int n;
int result = 0;
bool check(int h, int m, int s) {
    if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3)
        return true;
    return false;
}

int main(int argc, char const *argv[])
{

    cin >> n;

    for(int i=0; i<=n; i++){
        for(int m=0; m<60; m++){
            for(int s=0; s<60; s++){
                string str = to_string(n)+to_string(m)+to_string(s);
                if(str.find('3') != string::npos){
                    cout << str << "\n";
                    result++;
                } 
                // if(check(i,m,s)) result++;
            }
        }
    }

    cout << result << "\n";

    return 0;
}
