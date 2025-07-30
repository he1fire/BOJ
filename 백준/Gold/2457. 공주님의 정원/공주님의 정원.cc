#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, date=301, ans, now=0;
vector<pll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        arr.push_back({a*100+b,c*100+d});
    }
    sort(arr.begin(),arr.end());
    for (int i=-1;i<N && date<=1130;ans++){
        int chk=0;
        i++;
        for (int j=i;j<N;j++){
            if (arr[j].first>date)
                break;
            if (now<arr[j].second){
                now=arr[j].second;
                chk=1;
                i=j;
            }
        }
        if (!chk){
            cout << "0";
            return 0;
        }
        date=now;
    }
    cout << ans;
    return 0;
}