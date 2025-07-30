#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
ll f(int x){
    ll ret=0;
    while (x){
        ret+=x%10;
        x/=10;
    }
    return ret;
}
int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        if (i%f(i)==0)
            ans++;
    }
    cout << ans;
    return 0;
}