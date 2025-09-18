#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M, x;
string ans;
vector<string> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        v.push_back(a);
        if (a=="?")
            x=i;
    }
    cin >> M;
    for (int i=0;i<M;i++){
        string a;
        cin >> a;
        if ((x==0 || a[0]==v[x-1][v[x-1].size()-1]) && (x==N-1 || a[a.size()-1]==v[x+1][0])){
            if (find(v.begin(),v.end(),a)==v.end())
                ans=a;
        }
    }
    cout << ans;
    return 0;
}