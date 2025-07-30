#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, cnt[100005], chk[100005];
vector<ll> arr[100005];
void f(){
    for (int i=0, a, b;i<K;i++){
        cin >> a >> b;
        if (a==1){
            cnt[b]++;
            if (cnt[b]==1){
                for (auto x:arr[b])
                    chk[x]--;
            }
            if (chk[b]){
                cout << "Lier!";
                return;
            }
        }
        else{
            cnt[b]--;
            if (cnt[b]==0){
                for (auto x:arr[b])
                    chk[x]++;
            }
            if (cnt[b]<0){
                cout << "Lier!";
                return;
            }
        }
    }
    cout << "King-God-Emperor";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0, a, b;i<M;i++){
        cin >> a >> b;
        arr[a].push_back(b);
        chk[b]++;
    }
    f();
    return 0;
}