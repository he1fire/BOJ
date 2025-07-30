#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
double ans, cnt=1;
vector<double> arr;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        double a;
        cin >> a;
        arr.push_back(a);
        ans=max(a,ans);
    }
    for (int i=0;i<N;i++){
        cnt*=arr[i];
        ans=max(ans,cnt);
        if (cnt<1)
            cnt=1;
    }
    printf("%.3f",ans);
    return 0;
}