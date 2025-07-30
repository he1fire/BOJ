#include <iostream>
#define ll long long
using namespace std;
int main () {
    int N, M, T, cnt[2]={0}, ans=0;
    cin >> N >> M >> T;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        if (b<=M)
            cnt[1]++;
        else if (a<=M)
            cnt[0]++;
    }
    while (T){
        if (cnt[1]==0 && cnt[0]==0)
            break;
        if (cnt[1]>0){
            ans+=140;
            cnt[1]--;
            T--;
        }
        else if (cnt[0]>0){
            ans+=100;
            cnt[0]--;
            T--;
        }
    }
    cout << ans;
    return 0;
}