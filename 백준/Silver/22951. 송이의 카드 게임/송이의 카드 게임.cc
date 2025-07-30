#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[1005], cnt, now;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N*M;i++)
        cin >> arr[i];
    cnt=N*M;
    while (cnt>1){
        ll chk=arr[now];
        cnt--;
        arr[now]=0;
        while (chk){
            now=(now+1)%(N*M);
            if (arr[now])
                chk--;
        }
    }
    for (int i=0;i<N*M;i++){
        if (arr[i])
            cout << i/M+1 << " " << arr[i];
    }
    return 0;
}