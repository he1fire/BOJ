#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, mx=-INF, mn=INF;
vector<ll> arr;
string S, chk="+-*/";
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i=0;i<4;i++){
        ll a;
        cin >> a;
        while (a--)
            S+=chk[i];
    }
    sort(S.begin(),S.end());
    do {
        ll cnt=arr[0];
        for (int i=0;i<N-1;i++){
            char a=S[i];
            ll b=arr[i+1];
            if (a=='+')
                cnt+=b;
            if (a=='-')
                cnt-=b;
            if (a=='*')
                cnt*=b;
            if (a=='/')
                cnt/=b;
        }
        mx=max(mx,cnt);
        mn=min(mn,cnt);
    } while (next_permutation(S.begin(),S.end()));
    cout << mx << "\n" << mn;
    return 0;
}