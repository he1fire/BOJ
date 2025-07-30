#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull N, M, mx, chk=1;
vector<ull> arr;
bool cmp(ull x, ull y){
    ull A=x, B=y;
    string X=to_string(x), Y=to_string(y);
    for (int i=0;i<Y.size();i++){
        A*=10;
        A+=Y[i]-'0';
    }
    for (int i=0;i<X.size();i++){
        B*=10;
        B+=X[i]-'0';
    }
    return (A>B);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ull a;
        cin >> a;
        mx=max(mx,a);
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i=0;i<N;i++){
        cout << arr[i];
        if (chk && arr[i]==mx){
            for (int j=0;j<M-N;j++)
                cout << mx;
            chk=0;
        }
    }
    return 0;
}