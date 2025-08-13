#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    ll x, y;
};
ll ans;
string S[5];
vector<ll> v;
vector<xy> arr;
void f(){
    queue<xy> q;
    ll cnt=0, visited[7]={1,};
    for (auto x:arr){
        if (S[x.x][x.y]=='S')
            cnt++;
    }
    if (cnt<4)
        return;
    q.push(arr[0]);
    while(!q.empty()){
        xy x=q.front();
        q.pop();
        for (int i=0;i<7;i++){
            xy dx=arr[i];
            if (visited[i])
                continue;
            if ((abs(x.x-dx.x)==1 && x.y==dx.y) || (x.x==dx.x && abs(x.y-dx.y)==1)){
                visited[i]=1;
                q.push(dx);
            }
        }
    }
    for (auto x:visited){
        if (!x)
            return;
    }
    ans++;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<5;i++)
        cin >> S[i];
    for (int i=0;i<18;i++)
        v.push_back(0);
    for (int i=0;i<7;i++)
        v.push_back(1);
    do{
        arr.clear();
        for (int i=0;i<25;i++){
            if (v[i])
                arr.push_back({i/5,i%5});
        }
        f();
    }while(next_permutation(v.begin(),v.end()));
    cout << ans;
    return 0;
}