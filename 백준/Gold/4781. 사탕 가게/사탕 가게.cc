#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[10005];
double m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        fill(&arr[0],&arr[10004],0);
        cin >> N >> m;
        M=(ll)(m*100+0.5);
        if (N==0 && M==0)
            break;
        for (ll i=0;i<N;i++){
            ll a, b;
            double c;
            cin >> a >> c;
            b=(ll)(c*100+0.5);
            for (ll j=1;j<=M;j++){
                if (j>=b){
                    arr[j]=max(arr[j],arr[j-b]+a);
                }
            }
        }
        cout << arr[M] << "\n";
    }
    return 0;
}