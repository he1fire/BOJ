#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        int x1, x2, y1, y2, r1, r2;
        double d=0;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
        if (x1==x2 && y1==y2 && r1==r2)
            cout << "-1" << "\n";
        else if (abs(r1-r2)<d && d<r1+r2)
            cout << "2" << "\n";
        else if (abs(r1-r2)==d || r1+r2==d)
            cout << "1" << "\n";
        else
            cout << "0" << "\n";
    }
    return 0;
}