#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S, T;
vector<ll> arr[30];
ll f(){
    ll ret=1, now=-1;
    for (int i=0;i<T.size();i++)
        arr[T[i]-'a'].push_back(i);
    for (int i=0;i<S.size();i++){
        if (!arr[S[i]-'a'].size())
            return -1;
        auto x=upper_bound(arr[S[i]-'a'].begin(),arr[S[i]-'a'].end(),now);
        if (x==arr[S[i]-'a'].end()){
            ret++;
            now=*upper_bound(arr[S[i]-'a'].begin(),arr[S[i]-'a'].end(),-1);
        }
        else
            now=*x;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S >> T;
    cout << f();
    return 0;
}