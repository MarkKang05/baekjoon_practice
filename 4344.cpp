//https://www.acmicpc.net/problem/4344
#include <iostream>
using namespace std;

int main(){
    int n, m,avg=0, sth;
    double result;
    int student[1000];

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> m;
        avg=0;
        sth=0;

        for(int j=0; j<m; j++){
            cin >> student[j];
            avg += student[j];
        }
        avg = avg/m;
        for(int j=0; j<m; j++){
            if(student[j]>avg){
                sth++;
            }
        }
        result = (double)sth/m*100;

        cout << fixed;
        cout.precision(3);
        cout << result << "%\n";
    }
    


    return 0;
}
