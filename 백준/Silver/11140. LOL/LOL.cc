#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll N;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        int ans=3;
        cin >> S;
        for (int i=0;i<S.size();i++){
            if (S[i]=='l'){
                if (i+2<S.size() && S[i+1]=='o' && S[i+2]=='l')
                    ans=0;
                else if (i+2<S.size() && S[i+2]=='l')
                    ans=min(ans,1);
                else if (i+1<S.size() && (S[i+1]=='o' || S[i+1]=='l'))
                    ans=min(ans,1);
                else
                    ans=min(ans,2);
            }
            else if (S[i]=='o'){
                if (i+1<S.size() && S[i+1]=='l')
                    ans=min(ans,1);
                else
                    ans=min(ans,2);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}