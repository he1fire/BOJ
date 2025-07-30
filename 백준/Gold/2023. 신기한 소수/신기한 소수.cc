#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
ll f(ll x){
    for (int i=2;i*i<=x;i++){
        if (x%i==0)
            return 0;
    }
    return 1;
}
void backtrack(ll depth, ll x){
    if (depth==N){
        cout << x << "\n";
        return;
    }
    for (int i=0;i<=9;i++){
        if (f(x*10+i))
            backtrack(depth+1, x*10+i);
    }
}
int main(){
    cin >> N;
    backtrack(1,2);
    backtrack(1,3);
    backtrack(1,5);
    backtrack(1,7);
    return 0;
}