#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, cnt;
int main(){
    cin >> ans >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        cnt+=a*b;
    }
    cout << (ans==cnt ? "Yes" : "No");
    return 0;
}