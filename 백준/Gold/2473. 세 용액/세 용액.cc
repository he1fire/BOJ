#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, mn=3000000001, ans[3];
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        ll x=v[i];
        for (int L=i+1,R=N-1;L<R;){
            ll dx=abs(x+v[L]+v[R]);
            if (mn>dx){
                mn=dx;
                ans[0]=x;
                ans[1]=v[L];
                ans[2]=v[R];
            }
            if (v[L]+v[R]+x<0)
                L++;
            else
                R--;
        }
    }
    for (int i=0;i<3;i++)
        cout << ans[i] << " ";
    return 0;
}