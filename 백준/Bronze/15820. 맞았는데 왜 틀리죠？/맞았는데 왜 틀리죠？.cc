#include <iostream>
#define ll long long
using namespace std;
int main () {
    ll N, M, ans=1;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        if (a!=b)
        ans=-1;
        }
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        if (a!=b && ans==1)
        ans=0;
        }
    if (ans==1)
        cout << "Accepted";
    else if (ans==0)
        cout << "Why Wrong!!!";
    else
        cout << "Wrong Answer";
    return 0;
    }