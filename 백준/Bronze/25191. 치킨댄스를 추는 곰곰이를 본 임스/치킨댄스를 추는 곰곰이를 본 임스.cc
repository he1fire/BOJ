#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, A, B;
int main(){
    cin >> N >> A >> B;
    cout << min(N, A/2+B);
    return 0;
}