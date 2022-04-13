#include <iostream>
using namespace std;

string pos;
int result = 0;
int x=0, y=0;

int dx[] = {-2, -1, 1, -2, 1, 2, -1, 2};
int dy[] = {-1, -2, -2, 1, 2, 1, 2, -1};

int main(int argc, char const *argv[])
{
    
    cin >> pos;

    x = pos[0] - 'a';
    y = pos[1];

    int nx, ny;

    for(int i=0; i<8; i++) {
        nx = x+dx[i];
        ny = x+dy[i];

        if(nx <0 || ny <0 || nx>=8 || ny>=8) continue;
        result++;
    }

    cout << result << "\n";

    return 0;
}
