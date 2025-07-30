#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, hi=-1234, lo=1234;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin  >> a;
        lo=min(lo,a);
        hi=max(hi,a);
    }
    cout << hi-lo;
    return 0;
}