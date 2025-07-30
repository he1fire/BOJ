#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[105], chk[1000005], cnt[100000], score=1, choose;
vector<ll> prime;
void f(){
    for (ll i=2;i<=1000000;i++){
        if (!chk[i]){
            prime.push_back(i);
            for (ll j=i*i;j<=1000000;j+=i)
                chk[j]=1;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    f();
    ll N;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> arr[i];
        ll x=arr[i];
        for (int j=0;j<prime.size();j++){
            while (x%prime[j]==0){
                cnt[j]++;
                x/=prime[j];
            }
        }
    }
    for (int i=0;i<prime.size();i++){
        if (cnt[i]/N){
            for (int j=0;j<cnt[i]/N;j++)
                score*=prime[i];
            for (int j=0;j<N;j++){
                ll x=arr[j], y=0;
                while (x%prime[i]==0){
                    y++;
                    x/=prime[i];
                }
                if (y<cnt[i]/N)
                    choose+=cnt[i]/N-y;
            }
        }
    }
    cout << score << " " << choose;
    return 0;
}