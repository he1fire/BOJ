#include <iostream>
#define ll long long
using namespace std;
int main () {
    ll N, zero=0, one=1;
    cin >> N;
    while (--N){
        ll z=zero, o=one;
        zero=z+o;
        one=z;
    }
    cout << zero+one;
    return 0;
}