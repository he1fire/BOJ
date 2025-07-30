#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        cin >> arr[i];
    for (int i=1;i<=M;i++){
        for (int j=1;j<N;j++){
            if (arr[j]%i>arr[j+1]%i){
                ll tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for (int i=1;i<=N;i++)
        cout << arr[i] << "\n";
    return 0;
}