#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll arr[2][15], ans=0, now=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    fill(&arr[0][0],&arr[1][15],-1);
    for (int i=0;i<S.size();i++){
        if (now>=10){
            if (S[i]=='S')
                arr[0][now]=10;
            else if (S[i]=='-')
                arr[0][now]=0;
            else if (S[i]=='P')
                arr[0][now]=10-arr[0][now-1];
            else
                arr[0][now]=S[i]-'0';
            now++;
        }
        else if (S[i]=='S'){
            arr[0][now]=10;
            now++;
        }
        else{
            if (S[i]=='-')
                arr[0][now]=0;
            else
                arr[0][now]=S[i]-'0';
            if (S[i+1]=='-')
                arr[1][now]=0;
            else if (S[i+1]=='P')
                arr[1][now]=10-arr[0][now];
            else
                arr[1][now]=S[i+1]-'0';
            now++;
            i++;
        }
    }
    for (int i=1;i<15;i++){
        if (arr[0][i]==-1)
            break;
        if (i>=10)
            ans+=arr[0][i];
        else if (arr[0][i]==10){
            ll cnt=0, tmp=0;
            for (int j=(i+1)*2;cnt<2;j++){
                if (arr[j%2][j/2]!=-1){
                    tmp+=arr[j%2][j/2];
                    cnt++;
                }
            }
            ans+=tmp+10;
        }
        else if (arr[0][i]+arr[1][i]==10){
            ll tmp=0;
            for (int j=(i+1)*2;1;j++){
                if (arr[j%2][j/2]!=-1){
                    tmp+=arr[j%2][j/2];
                    break;
                }
            }
            ans+=tmp+10;
        }
        else
            ans+=arr[0][i]+arr[1][i];
    }
    cout << ans;
}