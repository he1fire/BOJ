#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<string> arr[1005];
set<string> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            string a;
            cin >> a;
            arr[i].push_back(a);
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            string x=arr[i][j];
            if (i+1<N && x==arr[i+1][j])
                s.insert(x);
            if (j+1<M && x==arr[i][j+1])
                s.insert(x);
            if (i+2<N && x==arr[i+2][j])
                s.insert(x);
            if (j+2<M && x==arr[i][j+2])
                s.insert(x);
        }
    }
    if (s.empty())
        cout << "MANIPULATED";
    else{
        for (auto x:s)
            cout << x << "\n";
    }
    return 0;
}