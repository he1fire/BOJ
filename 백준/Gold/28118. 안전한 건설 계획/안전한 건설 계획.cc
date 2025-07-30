#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[50][50], ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a-1][b-1]=1;
        arr[b-1][a-1]=1;
    }
    for (int i=0;i<N-3;i++)
        v.push_back(0);
    for (int i=0;i<3;i++)
        v.push_back(1);
    while (1){
        ll chk=1, cnt=0;
        sort(v.begin(),v.end());
        do{
            vector<ll> x;
            for (int i=0;i<N;i++){
                if (v[i])
                    x.push_back(i);
            }
            if (arr[x[0]][x[1]]+arr[x[0]][x[2]]+arr[x[1]][x[2]]==2){
                cnt++;
                arr[x[0]][x[1]]=arr[x[0]][x[2]]=arr[x[1]][x[2]]=1;
            }
        }while (next_permutation(v.begin(),v.end()));
        for (int i=0;i<N;i++){
            for (int j=i+1;j<N;j++){
                if (!arr[i][j])
                    chk=0;
            }
        }
        if (chk)
            break;
        if (!cnt){
            ans++;
            sort(v.begin(),v.end());
            do{
                vector<ll> x;
                for (int i=0;i<N;i++){
                    if (v[i])
                        x.push_back(i);
                }
                if (arr[x[0]][x[1]]+arr[x[0]][x[2]]+arr[x[1]][x[2]]==1){
                    arr[x[0]][x[1]]=arr[x[0]][x[2]]=arr[x[1]][x[2]]=1;
                    break;
                }
            }while (next_permutation(v.begin(),v.end()));
        }
    }
    cout << ans;
    return 0;
}