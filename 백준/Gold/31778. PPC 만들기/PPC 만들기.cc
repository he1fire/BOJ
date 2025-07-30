#include <bits/stdc++.h>
#define ll long long
#define INF (1e9)+7
using namespace std;
ll N, M, c, ans, cnt;
string S;
void f(){
    ll L=0, R=N-1;
    while (L<R && M){
        if (S[L]=='C' && S[R]=='P'){
            swap(S[L],S[R]);
            L++;
            R--;
            M--;
        }
        else if (S[L]!='C')
            L++;
        else
            R--;
    }
}
int main(void){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> S;
    f();
    for (int i=N-1;i>=0;i--){
        if (S[i]=='C')
            c++;
        else{
            ans+=cnt;
            cnt+=c;
        }
    }
    cout << ans;
    return 0;
}