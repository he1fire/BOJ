#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[200005], st;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
	for (int i=0;i<N;i++){
        cin >> arr[i];
        arr[i]+=arr[i-1];
    }
    while (M--){
        ll a, b, c;
        cin >> a >> b;
        if (a==1)
            st-=b;
        else if (a==2)
            st+=b;
        else{
            cin >> c;
            ll x=(b+st-2)%N, y=(c+st-1)%N;
            if (x<y)
                cout << arr[y]-arr[x] << "\n";
            else
                cout << arr[N-1]-(arr[x]-arr[y]) << "\n";
            }
        st=(st+N)%N;
    }
    return 0;
}