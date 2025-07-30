#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll dst, cnt;
    char c; 
    ABC() {};
    ABC(ll dst, ll cnt, char c): dst(dst), cnt(cnt), c(c) {}
};
bool operator<(ABC x, ABC y){
    return x.dst>y.dst;
}
ll N, A, B, ans;
vector<ABC> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        cin >> N >> A >> B;
        if (N==0 && A==0 && B==0)
            break;
        arr.clear();
        ans=0;
        for (int i=0;i<N;i++){
            ll K, x, y;
            cin >> K >> x >> y;
            ans+=K*min(x,y);
            if (x>y)
                arr.push_back({x-y, K, 'B'});
            else
                arr.push_back({y-x, K, 'A'});
        }
        sort(arr.begin(),arr.end());
        for (auto x:arr){
            if (x.c=='A'){
                A-=x.cnt;
                if (A<0){
                    ans+=x.dst*(-A);
                    A=0;
                }
            }
            else {
                B-=x.cnt;
                if (B<0){
                    ans+=x.dst*(-B);
                    B=0;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}