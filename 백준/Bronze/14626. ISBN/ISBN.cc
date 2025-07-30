#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
string S;
int x, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]=='*'){
            if (i%2==0)
                x=1;
            else
                x=3;
        }
        else if (i%2==0)
            ans+=S[i]-'0';
        else
            ans+=3*(S[i]-'0');
    }
    for (int i=0;i<=9;i++){
        if ((ans+x*i)%10==0){
            cout << i;
            break;
        }
    }
    return 0;
}