#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
double cnt, ans;
vector<double> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        double a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    cnt=N*0.15;
    cnt=floor(cnt+0.5);
    for (int i=cnt;i<arr.size()-cnt;i++)
        ans+=arr[i];
    ans=floor(ans/(arr.size()-2*cnt)+0.5);
    cout << (N ? ans : 0);
    return 0;
}