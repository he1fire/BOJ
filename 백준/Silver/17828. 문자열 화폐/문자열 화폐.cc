#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    if (N*26<M || N>M){
        cout << "!";
        return 0;
    }
    for (int i=N-1;i>=0;i--){
        if (i*26>M){
            cout << "A";
            M--;
        }
        else {
            if (M%26==0){
                cout << "Z";
                M-=26;
            }
            else {
                cout << (char)('A'+M%26-1);
                M-=M%26;
            }
        }
    }
    return 0;
}