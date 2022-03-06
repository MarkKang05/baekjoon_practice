#include <iostream>
#include <string>
using namespace std;

char table[3*1024][6*1024];
void printStar(int y, int x);
void makeStarTree(int n, int y, int x);
void printStarTree(int n);


int main() {

    int n;
    cin >> n;

    memset(table, ' ', sizeof(table));
    makeStarTree(n, 0, 0);
    printStarTree(n);

    return 0;
}

//
//  *
// * *
//*****

void printStar(int y, int x){
    table[y][x+2] = '*';

    table[y+1][x+1] = '*';
    table[y+1][x+3] = '*';

    table[y+0][x+3] = '*';
    table[y+1][x+3] = '*';
    table[y+2][x+3] = '*';
    table[y+3][x+3] = '*';
    table[y+4][x+3] = '*';


}

void makeStarTree(int n, int y, int x){
    if(n < 3)
        return;
    if(n == 3){
        printStar(y, x);
        return;
    }

    makeStarTree(n/2, y, x+n/2);
    makeStarTree(n/2, y+n/2, x);
    makeStarTree(n/2, y+n/2, x+n);
}

char t = '3';

void printStarTree(int n){
    for(int i=0; i < n; i++){
        for(int j=0; j < n*2; j++){
            // printf("%c", table[j,i]);
            cout << table[i, j];
        }
        printf("\n");
    }
}
