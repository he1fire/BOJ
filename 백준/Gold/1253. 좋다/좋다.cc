#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[2005], cnt;
vector<ll> ans, chk;
ll f(){
    ll ret=0;
    for (int i=0;i<N;i++){
        if (binary_search(ans.begin(),ans.end(),arr[i]))
            ret++;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> arr[i];
        if (arr[i]==0)
            cnt++;
    }
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            if (arr[i]!=0 && arr[j]!=0)
                ans.push_back(arr[i]+arr[j]);
            if (arr[i]==arr[j])
                chk.push_back(arr[i]);
        }
    }
    for (int i=0;i<chk.size();i++){
        if (chk[i]!=0 && cnt)
            ans.push_back(chk[i]);
    }
    if (cnt>2)
        ans.push_back(0);
    sort(ans.begin(),ans.end());
    cout << f();
    return 0;
}