#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, arr[200005], s[2][2];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N;
        for (int i=0;i<N;i++)
            cin >> arr[i];
        ll ground=0, fail=0;
        fill(&s[0][0],&s[1][2],0);
        for (int i=0;i<N;i++){
            if (arr[i]==ground+1)
                ground++;
            else {
                if (s[0][1]+1==arr[i])
                    s[0][1]++;
                else if (s[1][1]+1==arr[i])
                    s[1][1]++;
                else if (!s[0][0])
                    s[0][0]=s[0][1]=arr[i];
                else if (!s[1][0])
                    s[1][0]=s[1][1]=arr[i];
                else
                    break;
            }
            for (int j=0;j<2;j++){
                if (s[j][0]==ground+1){
                    ground=s[j][1];
                    s[j][0]=s[j][1]=0;
                    j=-1;
                }
            }
        }
        (ground==N) ? (cout << "YES\n") : (cout << "NO\n");
    }
    return 0;
}