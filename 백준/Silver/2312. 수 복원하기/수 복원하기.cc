#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
queue<pair<int,int> > q;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        for (int j=2;j*j<=a;j++){
            int cnt=0;
            while (a%j==0){
                cnt++;
                a/=j;
            }
            if (cnt)
                q.push({j,cnt});
        }
        if (a!=1)
            q.push({a,1});
        while (!q.empty()){
            cout << q.front().first << " " << q.front().second << "\n";
            q.pop();
        }
    }
    return 0;
}