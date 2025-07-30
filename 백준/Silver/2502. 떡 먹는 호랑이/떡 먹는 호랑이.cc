#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M;
pll arr[35];
int main(){
    cin >> N >> M;
    arr[1]={1,0};
    arr[2]={0,1};
    for (int i=3;i<=N;i++){
         arr[i].first=arr[i-1].first+arr[i-2].first;
         arr[i].second=arr[i-1].second+arr[i-2].second;
    }
    for (int i=1;i<M;i++){
        if ((M-i*arr[N].first)%arr[N].second==0){
            cout << i << "\n" << (M-i*arr[N].first)/arr[N].second;
            return 0;
        }
    }
    return 0;
}