#include <bits/stdc++.h>
#define ll long long
#define INF 1e9
using namespace std;
ll N, M, ans, arr[105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        if (M==1){
            ans++;
            if (i+3<N && arr[i]==arr[i+1] && arr[i+1]==arr[i+2] && arr[i+2]==arr[i+3])
                ans++;
        }
        else if (M==2){
            if (i+1<N && arr[i]==arr[i+1])
                ans++;
        }
        else if (M==3){
            if (i+1<N && arr[i]==arr[i+1]+1)
                ans++;
            if (i+2<N && arr[i]==arr[i+1] && arr[i+1]+1==arr[i+2])
                ans++;
        }
        else if (M==4){
            if (i+1<N && arr[i]+1==arr[i+1])
                ans++;
            if (i+2<N && arr[i]==arr[i+1]+1 && arr[i+1]==arr[i+2])
                ans++;
        }
        else if (M==5){
            if (i+1<N && arr[i]==arr[i+1]+1)
                ans++;
            if (i+1<N && arr[i]+1==arr[i+1])
                ans++;
            if (i+2<N && arr[i]==arr[i+1]+1 && arr[i]==arr[i+2])
                ans++;
            if (i+2<N && arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
                ans++;
        }
        else if (M==6){
            if (i+1<N && arr[i]==arr[i+1])
                ans++;
            if (i+1<N && arr[i]==arr[i+1]+2)
                ans++;
            if (i+2<N && arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
                ans++;
            if (i+2<N && arr[i]+1==arr[i+1] && arr[i+1]==arr[i+2])
                ans++;
        }
        else if (M==7){
            if (i+1<N && arr[i]==arr[i+1])
                ans++;
            if (i+1<N && arr[i]+2==arr[i+1])
                ans++;
            if (i+2<N && arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
                ans++;
            if (i+2<N && arr[i]==arr[i+1] && arr[i+1]==arr[i+2]+1)
                ans++;
        }
    }
    cout << ans;
    return 0;
}