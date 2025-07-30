#include <iostream>
using namespace std;
int f (int a, int b){
    return a ? f(b%a,a) : b;
    }
int main () {
    int N, x;
    cin >> N >> x;
    for (int i=1;i<N;i++){
        int y;
        cin >> y;
        int z=f(x,y);
        cout << x/z << "/" << y/z << "\n";
        }
    return 0;
    }