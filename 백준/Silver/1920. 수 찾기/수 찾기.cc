#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
ll arr[100005];
bool BinarySearch(ll x){
    ll lo=0, hi=N-1;
    while (lo<=hi){
        ll mid=(lo+hi)/2;
        if (arr[mid]<x)
            lo=mid+1;
        else if (arr[mid]>x)
            hi=mid-1;
        else
            return 1;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    sort(&arr[0],&arr[N]);
    cin >> M;
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        cout << BinarySearch(a) << "\n";
    }
    return 0;
}