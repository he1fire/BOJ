#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> v;
    int N, cnt=0, ans1=0, ans2=0;
    cin >> N;
    v.push_back(-1000000001);
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.push_back(1000000001);
    for (int i=1;i<=N;i++){
        if (v[i-1]<=v[i] && v[i]<=v[i+1])
            cnt++;
        else if (v[i-1]<=v[i+1])
            ans1++;
        else
            ans2++;
    }
    if (cnt==N)
        cout << N;
    else if (ans1+ans2<=2)
        cout << ans1;
    else
        cout << "0";
    
    return 0;
}