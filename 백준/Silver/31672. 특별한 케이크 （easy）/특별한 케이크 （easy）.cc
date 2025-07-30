#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, chk[15], arr[15];
vector<ll> v[15], ans;
string s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a;
        for (int j=0;j<a;j++){
            cin >> b;
            v[i].push_back(b-1);
        }
        cin >> chk[i];
    }
    for (int i=0;i<N;i++){
        arr[i]=1;
        ll tmp=1;
        for (int j=0;j<N;j++){
            ll how=chk[j]^(i==j);
            if (!how){
                for (auto x:v[j]){
                    if (arr[x]==1)
                        tmp=0;
                }
            }
            else{
                ll cnt=1;
                for (auto x:v[j]){
                    if (arr[x]==1)
                        cnt=0;
                }
                if (cnt)
                    tmp=0;
            }
        }
        if (tmp)
            ans.push_back(i+1);
        arr[i]=0;
    }
    if (ans.size()==0)
        cout << "swi";
    else{
        for (auto x:ans)
            cout << x << " ";
    }
    return 0;
}