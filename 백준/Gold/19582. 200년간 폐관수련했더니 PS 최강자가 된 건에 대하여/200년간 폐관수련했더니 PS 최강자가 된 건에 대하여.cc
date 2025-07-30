#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=1, chk, cnt, mx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        if (cnt>a){
            if (chk==0){
                chk=1;
                if (b<=mx && a>=cnt-mx)
                    cnt+=b-mx;
            }
            else
                ans=0;
        }
        else{
            cnt+=b;
            mx=max(mx,b);
        }
    }
    cout << (ans ? "Kkeo-eok" : "Zzz");
    return 0;
}