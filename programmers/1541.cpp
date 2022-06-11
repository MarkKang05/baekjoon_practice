#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;

    int len = str.size();
    int temp=0, sum=0;
    bool minus = false;

    for(int i=0; i<=len; i++){
        if(str[i]=='-' || str[i]=='+' || i==len){
            if(!minus){
                sum += temp;
            } else{
                sum -= temp;
            }
            temp = 0;
            if(str[i] == '-') minus = true;
        }
        else{
            temp *= 10;
            temp += str[i] - '0';
        }
    }

    cout << sum << "\n";

}
