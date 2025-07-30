#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=0, ans_idx=0, s[600005], e[600005], a[600005], b[600005];
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> s[i] >> e[i];
        v.push_back(s[i]);
        v.push_back(e[i]);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i=0;i<N;i++){
        s[i]=lower_bound(v.begin(),v.end(),s[i])-v.begin();
        e[i]=lower_bound(v.begin(),v.end(),e[i])-v.begin();
        a[s[i]]++;
        b[e[i]]++;
    }
    int now=0;
    for (int i=0;i<600000;i++){
        while (a[i]--)
            now++;
        if (ans<now){
            ans=now;
            ans_idx=i;
        }
        while (b[i]--)
            now--;
    }
    cout << ans << "\n";
    for (int i=0;i<N;i++){
        if (s[i]<=ans_idx && e[i]>=ans_idx)
            cout << i+1 << " ";
    }
    return 0;
}