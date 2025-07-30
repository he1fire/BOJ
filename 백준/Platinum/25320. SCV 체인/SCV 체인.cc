#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, chk[200005];
vector<pll> v[200005];
deque<pll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        char a;
        ll b;
        string s;
        cin >> a >> s >> b;
        v[i].push_back({a-'A',b});
        chk[b]=1;
        arr.push_back({b,i});
    }
    sort(arr.begin(),arr.end());
    for (int i=1;i<=2*N;i++){
        if (chk[i])
            continue;
        if (arr.empty())
            v[M-1].push_back({(v[M-1][v[M-1].size()-1].first+1)%2,i});
        else if (i<arr[0].first){
            cout << "NO";
            return 0;
        }
        else {
            while (arr.size()>1 && i>=arr[1].first && (arr[0].second==M-1 || v[arr[0].second][v[arr[0].second].size()-1].first!=v[arr[0].second+1][0].first))
                arr.pop_front();
            if (arr.size()==1){
                if (arr[0].second==M-1 || v[arr[0].second][v[arr[0].second].size()-1].first!=v[arr[0].second+1][0].first)
                    v[M-1].push_back({(v[M-1][v[M-1].size()-1].first+1)%2,i});
                else
                    v[arr[0].second].push_back({(v[arr[0].second][v[arr[0].second].size()-1].first+1)%2,i});
                arr.pop_back();
            }
            else{
                if ((arr[0].second==M-1 || v[arr[0].second][v[arr[0].second].size()-1].first!=v[arr[0].second+1][0].first) && i>v[M-1][0].second)
                    v[M-1].push_back({(v[M-1][v[M-1].size()-1].first+1)%2,i});
                else
                    v[arr[0].second].push_back({(v[arr[0].second][v[arr[0].second].size()-1].first+1)%2,i});
            }
        }
    }
    for (int i=0;i<M-1;i++){
        if (v[i][v[i].size()-1].first==v[i+1][0].first){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES\n";
    for (int i=0;i<M;i++){
        for (int j=0;j<v[i].size();j++){
            if (j)
                cout << (char)(v[i][j].first+'A') << " CHAIN " << v[i][j].second << "\n";
            else
                cout << (char)(v[i][j].first+'A') << " BLOCK " << v[i][j].second << "\n";
        }
    }
    return 0;
} 