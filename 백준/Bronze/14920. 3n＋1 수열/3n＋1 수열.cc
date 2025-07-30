#include <iostream>
#define ll long long
using namespace std;
int f(int x){
    if (x==1)
        return 0;
    else if (x%2==0)
        return 1+f(x/2);
    else
        return 1+f(x*3+1);
}
int main () {
    ll N;
    cin >> N;
    cout << f(N)+1;
    return 0;
}