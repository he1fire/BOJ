#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        if (a=="anj")
            ans=1;
    }
    ans ? cout << "뭐야;" : cout << "뭐야?";
    return 0;
}
