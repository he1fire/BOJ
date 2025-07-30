#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<char,ll> pcl;
ll N, cnt[100];
vector<string> arr;
vector<pcl> v;
ll cmp(pcl x, pcl y){
    return x.second>y.second;
}
void f(){
    for (char i='A';i<='Z';i++)
        v.push_back({i,0});
    for (int i=0;i<N;i++){
        ll tmp=1;
        for (int j=arr[i].size()-1;j>=0;j--){
            v[arr[i][j]-'A'].second+=tmp;
            tmp*=10;
        }
    }
    sort(v.begin(),v.end(),cmp);
    for (int i=0;i<v.size();i++){
        cnt[v[i].first]=9-i;
    }
}
ll ans(){
    ll ret=0;
    for (int i=0;i<N;i++){
        ll tmp=0;
        for (int j=0;j<arr[i].size();j++){
            tmp=tmp*10+cnt[arr[i][j]];
        }
        ret+=tmp;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        arr.push_back(s);
    }
    f();
	cout << ans();
    return 0;
}