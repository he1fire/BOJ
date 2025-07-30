#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1000005], cnt[1000005];
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0, a;i<N;i++){
        cin >> a;
        arr[a]=1;
        v.push_back(a);
    }
    for (int i=0;i<N;i++){
        for (int j=v[i];j<=1000000;j+=v[i]){
            if (arr[j]){
                cnt[v[i]]++;
                cnt[j]--;
            }
        }
    }
    for (auto i:v)
        cout << cnt[i] << " ";
    return 0;
}