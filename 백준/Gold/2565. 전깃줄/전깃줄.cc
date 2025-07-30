#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, arr[505]={0}, cnt[500]={0}, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        arr[a]=b;
    }
    for (int i=0;i<=500;i++){
        int chk=0;
        for (int j=0;j<i;j++){
            if (arr[i]>arr[j])
                chk=max(chk,cnt[j]+1);
        }
        cnt[i]=chk;
    }
    for (int i=0;i<=500;i++)
        ans=max(ans,cnt[i]);
    cout << N-ans;
    return 0;
}