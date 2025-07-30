#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll a, b, c;
    ABC(){}
    ABC(ll a, ll b, ll c) : a(a), b(b), c(c){}
};
bool operator<(ABC a, ABC b){
    return a.c > b.c;
}
ll N;
vector<ABC> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr.push_back(ABC(a,b,c));
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<N;i++){
        if (i==0 || i==1)
            cout << arr[i].a << " " << arr[i].b << "\n";
        else if (arr[i].a!=arr[0].a || arr[i].a!=arr[1].a){
            cout << arr[i].a << " " << arr[i].b;
            break;
        }
    }
    return 0;
}