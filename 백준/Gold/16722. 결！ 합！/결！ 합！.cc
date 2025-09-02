#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    string s[3];
};
ll N, chk[10][10][10], ans;
vector<st> v;
vector<ll> tmp;
ll f(st x, st y, st z){
    for (int i=0;i<3;i++){
        if (x.s[i]==y.s[i] && y.s[i]!=z.s[i])
            return -1;
        if (y.s[i]==z.s[i] && z.s[i]!=x.s[i])
            return -1;
        if (z.s[i]==x.s[i] && x.s[i]!=y.s[i])
            return -1;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<6;i++)
        tmp.push_back(0);
    for (int i=0;i<3;i++)
        tmp.push_back(1);
    for (int i=0;i<9;i++){
        string a, b, c;
        cin >> a >> b >> c;
        v.push_back({a,b,c});
    }
    cin >> N;
    while (N--){
        char x;
        cin >> x;
        if (x=='H'){
            ll a[3];
            cin >> a[0] >> a[1] >> a[2];
            sort(a, a+3);
            if (chk[a[0]-1][a[1]-1][a[2]-1])
                ans--;
            else{
                ans+=f(v[a[0]-1], v[a[1]-1], v[a[2]-1]);
                chk[a[0]-1][a[1]-1][a[2]-1]=1;
            }
        }
        else{
            sort(tmp.begin(),tmp.end());
            ll G=1;
            do{
                ll x[3], cnt=0;
                for (int i=0;i<9;i++){
                    if (tmp[i])
                        x[cnt++]=i;
                }
                if (f(v[x[0]], v[x[1]], v[x[2]])==1 && !chk[x[0]][x[1]][x[2]])
                    G=0;
            }while(next_permutation(tmp.begin(),tmp.end()));
            if (G && !chk[0][0][0]){
                ans+=3;
                chk[0][0][0]=1;
            }
            else
                ans--;
        }
    }
    cout << ans;
    return 0;
}