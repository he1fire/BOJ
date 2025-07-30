#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main () {
    ll N, M, U, F, D, cnt=0, ans=0;
    cin >> N >> M >> U >> F >> D;
    for (int i=0;i<M;i++){
        char a;
        cin >> a;
        if (a=='u' || a=='d')
            cnt+=U+D;
        else
            cnt+=F*2;
        if (cnt<=N)
            ans++;
    }
    cout << ans;
    return 0;
}