#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1005][1005], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string a ,b;
        cin >> a >> b;
        arr[(a[0]-'A')*26+(a[1]-'A')][(b[0]-'A')*26+(b[1]-'A')]++;
    }
    for (int i=0;i<26*26;i++){
        for (int j=i+1;j<26*26;j++)
            ans+=arr[i][j]*arr[j][i];
    }
    cout << ans;
    return 0;
}