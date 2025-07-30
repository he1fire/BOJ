#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> arr;
bool f(int x){
    ll cnt=0, ret=1;
    for (int i=0;i<N;i++){
        if (cnt+arr[i]<=x)
            cnt+=arr[i];
        else{
            if (x<arr[i])
                return 0;
            cnt=arr[i];
            ret++;
        }
    }
    return ret<=M;
}
ll ParametricSearch(){
    ll lo=0, hi=1000000001;
    while (lo+1<hi){
        ll mid=(lo+hi)/2;
        if (!f(mid))
            lo=mid;
        else
            hi=mid;
    }
    return lo+1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0, a;i<N;i++){
        cin >> a;
        arr.push_back(a);
    }
    cout << ParametricSearch();
    return 0;
}