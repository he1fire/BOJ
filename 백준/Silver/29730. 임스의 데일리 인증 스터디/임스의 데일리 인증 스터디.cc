#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<string> v[2];
bool cmp0(string x, string y){
    if (x.size()!=y.size())
        return x.size()<y.size();
    return x<y;
}
bool cmp1(string x, string y){
    return stol(x.substr(7))<stol(y.substr(7));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin.ignore();
    for (ll i=0;i<N;i++){
        string s;
        getline(cin,s);
        if (s.rfind("boj.kr/",0)==0)
            v[1].push_back(s);
        else
            v[0].push_back(s);
    }
    sort(v[0].begin(),v[0].end(),cmp0);
    sort(v[1].begin(),v[1].end(),cmp1);
    for (ll i=0;i<2;i++){
        for (auto x:v[i])
            cout << x << "\n";
    }
    return 0;
}