#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, row[1000005], col[1000005];
vector<ll> xx, yy;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll x, y;
        cin >> x >> y;
        xx.push_back(x+500000);
        yy.push_back(y+500000);
        if (i>0){
            ll x1=xx[i], x2=xx[i-1], y1=yy[i], y2=yy[i-1];
            if (x1==x2){
                if (y1>y2)
                    swap(y1,y2);
                for (int j=y1+1;j<=y2;j++)
                    col[j]++;
            }
            else{
                if (x1>x2)
                    swap(x1,x2);
                for (int j=x1+1;j<=x2;j++)
                    row[j]++;
            }
        }
    }
    ll x1=xx[0], x2=xx[N-1], y1=yy[0], y2=yy[N-1];
        if (x1==x2){
            if (y1>y2)
                swap(y1,y2);
            for (int j=y1;j<=y2;j++)
                col[j]++;
        }
        else{
            if (x1>x2)
                swap(x1,x2);
            for (int j=x1;j<=x2;j++)
                row[j]++;
        }
    for (auto i:xx)
        ans=max(ans,row[i]);
    for (auto i:yy)
        ans=max(ans,col[i]);
    cout << ans;
    return 0;
}