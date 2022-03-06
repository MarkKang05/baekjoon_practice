#include <iostream>
using namespace std;
int n,m,x;

int max(int p, int q) { return p>=q?p:q; }
int min(int p, int q) { return p<q?p:q; }

int mid(int p, int q, int r) {
    int max_val = max(max(p, q), r);
    int min_val = min(min(p, q), r);

    return p+q+r-max_val-min_val;
}

int main() {

    cin >> n >> m >> x;

    cout << mid(n,m,x) << endl;

    return 0;
}
