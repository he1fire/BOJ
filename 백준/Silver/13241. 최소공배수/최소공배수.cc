#include <iostream>
#define ll long long
using namespace std;
ll f(ll x, ll y){
    return x ? f(y%x,x) : y;
}
ll g(ll x, ll y){
    return x/f(x,y)*y;
}
int main () {
    ll N, M;
    cin >> N >> M;
    cout << g(N,M);
    return 0;
}