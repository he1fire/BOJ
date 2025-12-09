#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans[2], arr[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=0;i<3;i++){
        string a;
        cin >> a;
        S+=a;
    }
    for (char x='A';x<='Z';x++){
        ll cnt[2]={0,};
        for (ll i=0;i<8;i++){
            ll a=arr[i][0], b=arr[i][1], c=arr[i][2];
            if (S[a]==x && S[b]==x && S[c]==x)
                cnt[0]++;
        }
        ans[0]+=(cnt[0]!=0);
        for (char y=x+1;y<='Z';y++){
            cnt[1]=0;
            if (x==y)
                continue;
            for (ll i=0;i<8;i++){
                ll a=arr[i][0], b=arr[i][1], c=arr[i][2];
                if (S[a]==x && S[b]==x && S[c]==y)
                    cnt[1]++;
                if (S[a]==x && S[b]==y && S[c]==x)
                    cnt[1]++;
                if (S[a]==y && S[b]==x && S[c]==x)
                    cnt[1]++;
                if (S[a]==x && S[b]==y && S[c]==y)
                    cnt[1]++;
                if (S[a]==y && S[b]==x && S[c]==y)
                    cnt[1]++;
                if (S[a]==y && S[b]==y && S[c]==x)
                    cnt[1]++;
            }
            ans[1]+=(cnt[1]!=0);
        }
    }
    for (auto x:ans)
        cout << x << "\n";
    return 0;
}