#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, M, arr[105][105], ans=0;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<N;i++){
        ll visit[105]={0,}, cnt=1;
        for (int j=0;j<N;j++){
            if (j==0)
                continue;
            else{
                if (arr[i][j]==arr[i][j-1])
                    continue;
                else if (arr[i][j]+1==arr[i][j-1]){
                    ll chk=1;
                    for (int k=j;k<j+M;k++){
                        if (k>=N || visit[k]==1 || arr[i][k]!=arr[i][j])
                            chk=0;
                    }
                    if (chk){
                        for (int k=j;k<j+M;k++){
                            visit[k]=1;
                        }
                    }
                    else{
                        cnt=0;
                        break;
                    }
                }
                else if (arr[i][j]==arr[i][j-1]+1){
                    ll chk=1;
                    for (int k=j-M;k<j;k++){
                        if (k<0 || visit[k]==1 || arr[i][k]!=arr[i][j-1])
                            chk=0;
                    }
                    if (chk){
                        for (int k=j-M;k<j;k++){
                            visit[k]=1;
                        }
                    }
                    else{
                        cnt=0;
                        break;
                    }
                }
                else{
                    cnt=0;
                    break;
                }
            }
        }
        ans+=cnt;
    }
    for (int i=0;i<N;i++){
        ll visit[105]={0,}, cnt=1;
        for (int j=0;j<N;j++){
            if (j==0)
                continue;
            else{
                if (arr[j][i]==arr[j-1][i])
                    continue;
                else if (arr[j][i]+1==arr[j-1][i]){
                    ll chk=1;
                    for (int k=j;k<j+M;k++){
                        if (k>=N || visit[k]==1 || arr[k][i]!=arr[j][i])
                            chk=0;
                    }
                    if (chk){
                        for (int k=j;k<j+M;k++){
                            visit[k]=1;
                        }
                    }
                    else{
                        cnt=0;
                        break;
                    }
                }
                else if (arr[j][i]==arr[j-1][i]+1){
                    ll chk=1;
                    for (int k=j-M;k<j;k++){
                        if (k<0 || visit[k]==1 || arr[k][i]!=arr[j-1][i])
                            chk=0;
                    }
                    if (chk){
                        for (int k=j-M;k<j;k++){
                            visit[k]=1;
                        }
                    }
                    else{
                        cnt=0;
                        break;
                    }
                }
                else{
                    cnt=0;
                    break;
                }
            }
        }
        ans+=cnt;
    }
    cout << ans;
    return 0;
}