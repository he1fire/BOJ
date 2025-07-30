#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    ll chk=1, now=1;
    stack<ll> s;
    vector<ll> v;
    vector<char> arr;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }

    for (int i=0;i<N;i++){
        while (v[i]>=now){
            s.push(now++);
            arr.push_back('+');
        }
        if (v[i]==s.top()){
            s.pop();
            arr.push_back('-');
        }
        else{
            chk=0;
            break;
        }
    }
    if (chk){
        for (auto i:arr)
            cout << i << "\n";
    }
    else
        cout << "NO";
    return 0;
}