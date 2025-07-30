#include <bits/stdc++.h>
#define ll long long
using namespace std;
string name, ans;
vector<string> arr;
ll N, cnt=-1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> name >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<N;i++){
        ll L=0, O=0, V=0, E=0;
        for (auto j:name){
            if (j=='L')
                L++;
            if (j=='O')
                O++;
            if (j=='V')
                V++;
            if (j=='E')
                E++;
        }
        for (auto j:arr[i]){
            if (j=='L')
                L++;
            if (j=='O')
                O++;
            if (j=='V')
                V++;
            if (j=='E')
                E++;
        }
        if (cnt<((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E))%100){
            cnt=((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E))%100;
            ans=arr[i];
        }
    }
    cout << ans;
    return 0;
}