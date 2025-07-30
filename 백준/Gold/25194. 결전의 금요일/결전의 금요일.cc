#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[10];
ll backtrack(ll now){
    ll ret=0;
    for (int i=1;i<7;i++){
        if (arr[i]){
            if ((now+i)%7==4)
                return 1;
            arr[i]--;
            ret+=backtrack((now+i)%7);
            arr[i]++;
        }
        if (ret)
            return 1;
    }
    return 0;
}
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (arr[a%7]<6)
            arr[a%7]++;
    }
    cout << (backtrack(0) ? "YES" : "NO"); 
    return 0;
}