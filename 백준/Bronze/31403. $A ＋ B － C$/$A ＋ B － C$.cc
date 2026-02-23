#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll A, B, C;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B >> C;
    cout << A+B-C << "\n";
    cout << stol(to_string(A)+to_string(B))-C;
    return 0;
}