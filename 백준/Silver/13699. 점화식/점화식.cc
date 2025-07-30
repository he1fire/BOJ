#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main () {
    vector<ll> x;
    ll N;
    cin >> N;
    x.push_back(1);
    x.push_back(1);
    for (int i=2;i<=N;i++){
        ll cnt=0;
        if (i%2==0){
            for (int j=0;j<i/2;j++)
                cnt+=x[j]*x[i-j-1]*2;
        }
        else {
            for (int j=0;j<i/2;j++)
                cnt+=x[j]*x[i-j-1]*2;
            cnt+=x[i/2]*x[i/2];
        }
        x.push_back(cnt);
    }
    cout << x[N];
    return 0;
}