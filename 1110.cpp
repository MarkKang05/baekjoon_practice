#include <iostream>
using namespace std;

int main(){
    int n, a, b, i, tmp;
    
    cin >> i;
    tmp = i;
    n=1;

    while(true){

        if(tmp<10){
            a=0;
            b=tmp;
        }else{
            a=tmp/10;
            b=tmp%10;
        }
        tmp = b*10+((a+b)%10);

        if(tmp==i){
            break;
        }
        n++;
    }
    cout << n << endl;

    return 0;
}
