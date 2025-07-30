#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> st, ed;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        st.push_back(a);
        ed.push_back(b);
    }
    sort(st.begin(),st.end());
    sort(ed.begin(),ed.end());
    cin >> M;
    while (M--){
        ll x;   
        cin >> x;
        cout << (upper_bound(st.begin(), st.end(), x)-st.begin())-(lower_bound(ed.begin(), ed.end(), x)-ed.begin()) << "\n";
    }
    return 0;
}