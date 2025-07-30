#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int N, ans=0;
    cin >> N;
    vector<int> x(N,0), y(N,0);
    for (int i=0;i<N;i++)
        cin >> x[i];
    y=x;
    for (int i=N-1;i>=0;i--){
        for (int j=i;j<N;j++){
            if (x[i]>x[j])
                y[i]=max(y[i],y[j]+x[i]);
        }
    }
    for (int i=0;i<N;i++)
        ans=max(ans,y[i]);
    cout << ans;
    return 0;
    }