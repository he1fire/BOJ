#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    int a, b, x;
    ABC() {}
    ABC(int a, int b, int x) : a(a), b(b), x(x) {}
};
bool operator<(ABC a, ABC b){
    if (a.x!=b.x)
        return a.x < b.x;
    else
        return a.a < b.a;
}
ll N, M;
vector<ABC> arr;
int main(){
    for (int i=1;i<=150;i++){
        for (int j=i+1;j<=150;j++)
            arr.push_back({i,j,i*i+j*j});
    }
    sort(arr.begin(),arr.end());
    while (cin >> N >> M){
        if (N==0 && M==0)
            break;
        ll cnt=N*N+M*M;
        for (auto i:arr){
            if (cnt==i.x && i.a>N){
                cout << i.a << " " << i.b << "\n";
                break;
            }
            if (cnt<i.x){
                cout << i.a << " " << i.b << "\n";
                break;
            }
        }
    }
    return 0;
}