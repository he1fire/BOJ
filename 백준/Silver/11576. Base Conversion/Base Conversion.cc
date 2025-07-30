#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v1, v2;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, T;
    long long cnt=1, ans=0;
    cin >> N >> M >> T;
    for (int i=0;i<T;i++){
        int a;
        cin >> a;
        v1.push_back(a);
    }
    reverse(v1.begin(),v1.end());
    for (int i=0;i<v1.size();i++){
        ans+=cnt*v1[i];
        cnt*=N;
    }
    while (ans){
        v2.push_back(ans%M);
        ans/=M;
    }
    reverse(v2.begin(),v2.end());
    for (int i=0;i<v2.size();i++)
        cout << v2[i] << " ";
    return 0;
}