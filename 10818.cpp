#include <iostream>
using namespace std;

int main(){
    int n, min, max; 
    cin >> n;
    int array[n];
    min = 1000000; 
    max = -1000000; 

    for(int i=0;i<n;i++){
        cin >> array[i];
        if(min>array[i]){
            min = array[i];
        }
        if(max<array[i]){
            max = array[i];
        }
    }

    cout << min << " " << max;

    return 0;
}
