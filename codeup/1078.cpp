#include <iostream>
using namespace std;

int main() {
    int input, i=1, sum=0;

    cin >> input;

    while(i <= input){
        sum += i;
        i++;
    }

    cout << sum << endl;

    return 0;
}
