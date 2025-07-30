#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, arr[105];
int main(){
    cin >> N;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    cin >> M;
    for (int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        if (a==1){
            for (int j=b;j<=N;j+=b)
                arr[j]^=1;
        }
        else {
            int x=1;
            arr[b]^=1;
            while (arr[b+x]==arr[b-x] && b-x>=1 && b+x<=N){
                arr[b+x]^=1;
                arr[b-x]^=1;
                x++;

            }
        }
    }
    int x=1;
    for (int i=1;i<=N;i++){
        cout << arr[i] << " ";
        if (x*20<=i){
            cout << "\n";
            x++;
        }
    }
    return 0;
}