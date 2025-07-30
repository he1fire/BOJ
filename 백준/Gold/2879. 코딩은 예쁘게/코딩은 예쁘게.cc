#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[1005], tab[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++)
        cin >> tab[i];
    for (int i=0;i<N;i++){
        while (arr[i]!=tab[i]){
            ll gap=0, max=0, cnt=0, chk=i;
            arr[i]<tab[i] ? gap=1 : gap=-1;
            for (int j=i+1;j<N;j++){
                if (arr[j]+gap<0)
                    break;
                if ((arr[j]>tab[j] && gap==-1) || (arr[j]<tab[j] && gap==1))
                    cnt++;
                else
                    cnt--;
                if (cnt>max){
                    max=cnt;
                    chk=j;
                }
            }
            for (int j=i;j<=chk;j++)
                arr[j]+=gap;
            ans++;
        }
    }
    cout << ans;
    return 0;
}