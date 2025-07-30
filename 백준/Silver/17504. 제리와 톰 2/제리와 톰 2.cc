#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x, y;
stack<ll> st;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        st.push(a);
    }
    x=1,y=st.top();
    st.pop();
    while (!st.empty()){
        ll a=st.top();
        st.pop();
        x+=y*a;
        swap(x,y);
    }
    x=y-x;
    cout << x << " " << y;
    return 0;
}