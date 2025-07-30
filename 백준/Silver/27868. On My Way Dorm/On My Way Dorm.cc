#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> arr;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0,a;i<N;i++){
        cin >> a;
        arr.push_back(a);
    }
    cin >> S;
    reverse(S.begin(),S.end());
    cout << S;
    return 0;
}