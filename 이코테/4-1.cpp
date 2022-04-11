#include <iostream>
using namespace std;

int n;
int x=0, y=0;
string str;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
char arr[] = {'U', 'D', 'L', 'R'};

int main(int argc, char const *argv[])
{

    cin >> n; 
    cin.ignore();
    getline(cin, str);

    int nx=0, ny=0;

    for(char p : str) {
        for(int i=0; i<4; i++){
            if(arr[i]==p){
                nx = x + dx[i];
                ny = y + dy[i];
            }
        }

        if(nx<0 || ny<0 || nx>=n || ny>=n) continue;

        x = nx;
        y = ny;
        // cout << char(p) << x << " " << y << "\n";
    }

    cout << y+1 << " " << x+1 << "\n";

    return 0;
}

/*
5
R R R U D D
*/
