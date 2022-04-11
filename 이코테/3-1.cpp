#include <iostream>
using namespace std;

int n = 1260;
int cnt = 0;

int coin_types[] = {500, 100, 50, 10};

int main(int argc, char const *argv[])
{

    for(int i=0; i<4; i++){
        cnt += n/coin_types[i];
        n = n%coin_types[i];
    }

    cout << cnt << "\n";

    return 0;
}
