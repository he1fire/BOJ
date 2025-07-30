#include <bits/stdc++.h>
#define ll long long
using namespace std;
double N, M;
int main(){
    cin >> N >> M;
    cout << (N-N*M/100<100);
    return 0;
}