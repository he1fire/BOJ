#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<pair<pair<int,int> ,int> > x;
    pair<pair<int,int> ,int> ans;
    int N, M;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a==M)
            ans=make_pair(make_pair(b,c),d);
        x.push_back(make_pair(make_pair(b,c),d));
    }
    sort(x.rbegin(),x.rend());
    for (int i=0;i<N;i++){
        if (ans==x[i]){
            cout << i+1;
            break;
        }
    }
    return 0;
}