#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1000005], sieve[1000005];;
vector<ll> v;
void f(){
    for (int i=1;i<=1000000;i++){
        if (arr[i]>0){
            sieve[i]+=arr[i]-1;
            for (int j=i*2;j<=1000000;j+=i)
                sieve[j]+=arr[i];
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
        arr[a]++;
    }
    f();
    for (auto x:v)
        cout << sieve[x] << "\n";
    return 0;
}