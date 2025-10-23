#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> N >> M){
        if (!N && !M)
            break;
        cout << min({N*30+M*40,N*35+M*30,N*40+M*20}) << "\n";
    }
    return 0;
}