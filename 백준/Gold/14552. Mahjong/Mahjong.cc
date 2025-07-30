#include <bits/stdc++.h>
#define ll long long
#define MOD 1e9+7
using namespace std;
vector<ll> arr(10,0), ans, cp;
ll f(ll head, ll body){
    ll ret=0;
    if ((head==1 && body==4))
        return 1;
    for (int i=0;i<cp.size();i++){
        if (cp[i]>=2){
            cp[i]-=2;
            ret+=f(head+1,body);
            cp[i]+=2;
        }
        if (cp[i]>=3){
            cp[i]-=3;
            ret+=f(head,body+1);
            cp[i]+=3;
        }
        if (i<=7 && cp[i]>=1 && cp[i+1]>=1 && cp[i+2]>=1){
            cp[i]--, cp[i+1]--, cp[i+2]--;
            ret+=f(head,body+1);
            cp[i]++, cp[i+1]++, cp[i+2]++;
        }
    }
    return ret;
}
ll g(){
    ll ret=0;
    for (int i=1;i<=9;i++){
        if (cp[i]==2)
            ret++;
    }
    return ret==7;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<13;i++){
        ll a;
        cin >> a;
        arr[a]++;
    } 
    for (int i=1;i<=9;i++){
        if (arr[i]==4)
            continue;
        cp.clear();
        cp=arr;
        cp[i]++;
        if (f(0,0) || g())
            ans.push_back(i);
    }
    if (ans.size())
        for (auto i:ans)
            cout << i << " ";
    else
        cout << "-1";
    return 0;
}