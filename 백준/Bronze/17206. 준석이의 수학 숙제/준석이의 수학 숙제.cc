#include <iostream>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int x, a=0, b=0, c=0;
        cin >> x;
        a=x/3;
        b=x/7;
        c=x/21;
        a=3*a*(a+1)/2;
        b=7*b*(b+1)/2;
        c=21*c*(c+1)/2;
        cout << a+b-c << "\n";
    }
    return 0;
    }