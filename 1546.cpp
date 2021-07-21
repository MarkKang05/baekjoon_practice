#include <iostream>
using namespace std;

int main(){
    int n, m=0; 
    double sum=0;
    cin >> n;
    int ary[n];

    for(int i=0; i<n; i++){
        cin >> ary[i];
        if(ary[i] > m){
            m = ary[i];
        }
        sum += ary[i];
    }

    sum = (sum/m*100) / n;
    cout << fixed;
	cout.precision(6);
	cout << sum << endl;
}
