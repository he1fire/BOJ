#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, T;
double x, y;
vector<double> arr;
int main(){
    cin >> T >> y >> N >> x;
    for (int i=0;i<T;i++){
        double a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.rbegin(),arr.rend());
    for (int i=0;i<T;i++){
        if (x/y<(x+arr[i])/(y+N)){
            y+=N;
            x+=arr[i];
        }
        else
            break;
    }
    printf("%d",(int)(x/y));
    return 0;
}