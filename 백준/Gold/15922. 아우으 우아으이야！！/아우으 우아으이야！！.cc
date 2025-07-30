#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
stack<pair<int,int> > st;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        int x, y;
        cin >> x >> y;
        if (st.empty() || st.top().first<x)
            st.push({y,x});
        else{
            int dy=st.top().first, dx=st.top().second;
            st.pop();
            st.push({max(dy,y),dx});
        }
    }
    while(!st.empty()){
        int y=st.top().first, x=st.top().second;
        st.pop();
        ans+=y-x;
    }
    cout << ans;
    return 0;
}