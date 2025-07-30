#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> arr;
queue<ll> q;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<10;i++){
        q.push(i);
        arr.push_back(i);
    }
    while (!q.empty()){
        ll x=q.front();
        q.pop();
        for (int i=0;i<x%10;i++){
            q.push(x*10+i);
            arr.push_back(x*10+i);
        }
    }
    sort(arr.begin(),arr.end());
    if (arr.size()>N)
        cout << arr[N];
    else
        cout << -1;
    return 0;
}