#include <bits/stdc++.h>
#define ll long long
using namespace std;
string N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    while (cin >> N >> M){
        if (N=="#" && M=="#")
            break;
        ll T, n=0, m=0;
        cin >> T;
        for (int i=0;i<T;i++){
            char a, b;
            cin >> a >> b;
            if (a==b)
                n++;
            else
                m++;
        }
        cout << N << " " << n << " " << M << " " << m << "\n";
    }
    return 0;
}