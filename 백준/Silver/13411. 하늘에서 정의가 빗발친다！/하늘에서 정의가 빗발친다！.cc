#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<double,ll> pdl;
ll N, M;
vector<pdl> arr;
int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        double a, b, c, cnt=0;
        cin >> a >> b >> c;
        cnt=(a*a+b*b)/(c*c);
        arr.push_back({cnt,i});
    }
    sort(arr.begin(),arr.end());
    for (auto i:arr)
        cout << i.second << "\n";
    return 0;
}