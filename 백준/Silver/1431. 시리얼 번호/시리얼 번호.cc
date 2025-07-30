#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N;
string arr[1005];
ll cmpstr(string x, string y){
    if (x.size()!=y.size())
        return (ll)x.size()-(ll)y.size();
    ll a=0, b=0;
    for (int i=0;i<x.size();i++){
        if ('0'<=x[i] && x[i]<='9')
            a+=x[i]-'0';
        if ('0'<=y[i] && y[i]<='9')
            b+=y[i]-'0';
    }
    if (a!=b)
        return a-b;
    return x.compare(y);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            if (cmpstr(arr[i],arr[j])>0)
                swap(arr[i],arr[j]);
        }
    }
    for (int i=0;i<N;i++)
        cout << arr[i] << "\n";
    return 0;
}