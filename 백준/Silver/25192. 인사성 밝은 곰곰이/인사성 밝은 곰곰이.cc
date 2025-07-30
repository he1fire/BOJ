#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
map<string,ll> m;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        if (a=="ENTER")
            m.clear();
        else if (m[a]==0){
            ans++;
            m[a]=1;
        }
    }
    cout << ans;
    return 0;
}