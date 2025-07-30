#include <bits/stdc++.h>
#define ll long long
using namespace std;
int arr[205], chk[1005];
int Find(int x){
    if (x == arr[x]) return x;
    return arr[x] = Find(arr[x]);
}
void Union(int x, int y){
    arr[Find(x)]=Find(y);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, ans=1;
    cin >> N >> M;
    for (int i=1;i<=200;i++)
        arr[i]=i;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            int a;
            cin >> a;
            if (a && Find(i)!=Find(j))
                Union(i,j);
        }
    }
    for (int i=0;i<M;i++)
        cin >> chk[i];
    for (int i=0;i<M;i++){
        if (Find(chk[0])!=Find(chk[i]))
            ans=0;
    }
    ans ? cout << "YES" : cout << "NO";
    return 0;
}
