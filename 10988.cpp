#include <iostream>
#include <algorithm>
using namespace std;

string s, temp;

int main()
{
    cin >> s;
    temp = s;
    reverse(temp.begin(), temp.end());
    if(s==temp) cout << 1 << "\n";
    else cout << 0 << "\n";
    return 0;
}