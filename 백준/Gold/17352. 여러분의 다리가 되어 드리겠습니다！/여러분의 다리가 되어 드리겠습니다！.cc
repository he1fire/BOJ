#include <bits/stdc++.h>
#define ll long long
using namespace std;
int arr[300005];
int Find(int x) {
    if (x == arr[x]) return x;
    return arr[x] = Find(arr[x]);
}
void Union(int x, int y){
    arr[Find(x)]=Find(y);
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        arr[i]=i;
    for (int i=0;i<N-2;i++){
        int a, b;
        cin >> a >> b;
        Union(a,b);
    }
    for (int i=2;i<=N;i++){
        if (Find(1)!=Find(i)){
            cout << "1 " << i;
            break;
        }
    }
    return 0;
}