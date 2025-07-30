#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
int N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x1, x2, x3, y1, y2, y3, ccw=0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ccw=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if (ccw>0)
        cout << "1";
    else if (ccw<0)
        cout << "-1";
    else
        cout << "0";
    return 0;
}