#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1000005];
ll f(){
    ll ret1=0, idx1=0, ret2=0, idx2=0;
    for (int i=0;i<N;i++){
        if (arr[i]%2){
            ret1+=i-idx1;
            idx1++;
        }
        else{
            ret2+=i-idx2;
            idx2++;
        }
    }
    return min(ret1,ret2);
}
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    cout << f();
    return 0;
} 