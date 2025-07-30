#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<int,int> > v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, x=0, y=0;
    double ans=987654321;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    for (int i=0;i<N;i++){
        double cnt=0;
        for (int j=0;j<N;j++)
            cnt=max(cnt,sqrt(pow(v[i].first-v[j].first,2)+pow(v[i].second-v[j].second,2)));
        if (cnt<ans){
            ans=cnt;
            x=v[i].first;
            y=v[i].second;
        }
    }
    cout << x <<  " " << y;
    return 0;
}