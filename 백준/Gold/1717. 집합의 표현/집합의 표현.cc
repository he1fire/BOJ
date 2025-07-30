#include <iostream>
using namespace std;
int N, M;
int arr[1000005];
int Find(int x){
    if (x == arr[x]) return x;
    return arr[x] = Find(arr[x]);
}
void Union(int x, int y){
    arr[Find(x)]=Find(y);
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=1000000;i++)
        arr[i]=i;
    for (int i=0;i<M;i++){
        int a, b, c;
        cin >> a >> b >> c;
        if (a)
            Find(b)==Find(c) ? cout << "YES\n" : cout << "NO\n";
        else
            Union(b,c);
    }
    return 0;
}