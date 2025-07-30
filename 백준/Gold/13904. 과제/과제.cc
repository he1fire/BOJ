#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<pair<int,int> > v;
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.rbegin(),v.rend());
    for (int i=1000;i>0;i--){
        int cnt=0, chk=0;
        for (int j=0;j<v.size();j++){
            if (v[j].first<i)
                break;
            if (v[j].second>cnt && v[j].first!=9999){
                chk=j;
                cnt=v[j].second;
            }
        }
        if (cnt){
            ans+=cnt;
            v[chk].first=9999;
        }
    }
    cout << ans;
    return 0;
}