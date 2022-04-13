#include <iostream>
using namespace std;

int n, m;
int x, y, direction;
int arr[3][50];
int visited[3][50];

int cnt = 1;

// int dir[] = {0, 3, 2, 1}; // 북, 서, 남, 동
int dx[] = {0, -1, 0, 1};
int dy[] = {-1, 0, 1, 0};


int main(int argc, char const *argv[])
{
    cin >> n >> m >> x >> y >> direction;

    visited[x][y] = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int turn_time = 0;
    while(1){
        direction += 1;
        if(direction==4){
            direction=0;
        }

        int nx = x + dx[direction];
        int ny = y + dy[direction];

        if(arr[nx][ny]==0 && visited[nx][ny] == 0){
            visited[nx][ny] = 1;

            x = nx;
            y = ny;

            cnt +=1;
            turn_time = 0;
            continue;        
        } else{
            turn_time+=1;
        }

        if (turn_time==4){
            nx = x - dx[direction];
            ny = y - dy[direction];

            if (arr[nx][ny] == 0)
            {
                x=nx;
                y=ny;
            } else{
                break;
            }
            turn_time=0; 
        }

    }

    cout << cnt << "\n";

    return 0;
}

/*

4 4
1 1 0
1 1 1 1
1 0 0 1
1 1 0 1
1 1 1 1

*/
